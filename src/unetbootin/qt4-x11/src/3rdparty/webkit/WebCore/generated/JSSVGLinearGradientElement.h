/*
    This file is part of the WebKit open source project.
    This file has been generated by generate-bindings.pl. DO NOT MODIFY!

    This library is free software; you can redistribute it and/or
    modify it under the terms of the GNU Library General Public
    License as published by the Free Software Foundation; either
    version 2 of the License, or (at your option) any later version.

    This library is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
    Library General Public License for more details.

    You should have received a copy of the GNU Library General Public License
    along with this library; see the file COPYING.LIB.  If not, write to
    the Free Software Foundation, Inc., 51 Franklin Street, Fifth Floor,
    Boston, MA 02110-1301, USA.
*/

#ifndef JSSVGLinearGradientElement_h
#define JSSVGLinearGradientElement_h


#if ENABLE(SVG)

#include "JSSVGGradientElement.h"

namespace WebCore {

class SVGLinearGradientElement;

class JSSVGLinearGradientElement : public JSSVGGradientElement {
    typedef JSSVGGradientElement Base;
public:
    JSSVGLinearGradientElement(PassRefPtr<JSC::Structure>, PassRefPtr<SVGLinearGradientElement>);
    static JSC::JSObject* createPrototype(JSC::ExecState*);
    virtual bool getOwnPropertySlot(JSC::ExecState*, const JSC::Identifier& propertyName, JSC::PropertySlot&);
    virtual const JSC::ClassInfo* classInfo() const { return &s_info; }
    static const JSC::ClassInfo s_info;

    static PassRefPtr<JSC::Structure> createStructure(JSC::JSValuePtr prototype)
    {
        return JSC::Structure::create(prototype, JSC::TypeInfo(JSC::ObjectType));
    }

};


class JSSVGLinearGradientElementPrototype : public JSC::JSObject {
public:
    static JSC::JSObject* self(JSC::ExecState*);
    virtual const JSC::ClassInfo* classInfo() const { return &s_info; }
    static const JSC::ClassInfo s_info;
    JSSVGLinearGradientElementPrototype(PassRefPtr<JSC::Structure> structure) : JSC::JSObject(structure) { }
};

// Attributes

JSC::JSValuePtr jsSVGLinearGradientElementX1(JSC::ExecState*, const JSC::Identifier&, const JSC::PropertySlot&);
JSC::JSValuePtr jsSVGLinearGradientElementY1(JSC::ExecState*, const JSC::Identifier&, const JSC::PropertySlot&);
JSC::JSValuePtr jsSVGLinearGradientElementX2(JSC::ExecState*, const JSC::Identifier&, const JSC::PropertySlot&);
JSC::JSValuePtr jsSVGLinearGradientElementY2(JSC::ExecState*, const JSC::Identifier&, const JSC::PropertySlot&);

} // namespace WebCore

#endif // ENABLE(SVG)

#endif
