#pragma once

/* <editor-fold desc="MIT License">

Copyright(c) 2018 Robert Osfield

Permission is hereby granted, free of charge, to any person obtaining a copy of this software and associated documentation files (the "Software"), to deal in the Software without restriction, including without limitation the rights to use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies of the Software, and to permit persons to whom the Software is furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.

</editor-fold> */

#include <vsg/core/Inherit.h>
#include <vsg/core/observer_ptr.h>
#include <vsg/io/FileSystem.h>
#include <vsg/io/Options.h>

#include <vsg/nodes/PagedLOD.h>

#include <vsg/traversals/CompileTraversal.h>

namespace vsg
{

    class DatabasePager : public Inherit<Object, DatabasePager>
    {
    public:
        DatabasePager();

        virtual void request(ref_ptr<PagedLOD> plod);

        void updateSceneGraph();

        ref_ptr<const Options> options;

        ref_ptr<CompileTraversal> compileTraversal;

    protected:
        virtual ~DatabasePager();
    };
    VSG_type_name(vsg::DatabasePager);

} // namespace vsg