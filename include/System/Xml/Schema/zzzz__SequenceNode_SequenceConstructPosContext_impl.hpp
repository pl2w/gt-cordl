#pragma once
// IWYU pragma private; include "System/Xml/Schema/SequenceNode_SequenceConstructPosContext.hpp"
#include "System/Xml/Schema/zzzz__SequenceNode_SequenceConstructPosContext_def.hpp"
#include "System/Xml/Schema/zzzz__BitSet_def.hpp"
#include "System/Xml/Schema/zzzz__SequenceNode_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::SequenceNode_SequenceConstructPosContext._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SequenceNode_SequenceConstructPosContext::*)(::System::Xml::Schema::SequenceNode*, ::System::Xml::Schema::BitSet*, ::System::Xml::Schema::BitSet*)>(&::GlobalNamespace::SequenceNode_SequenceConstructPosContext::_ctor)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0xac339a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SequenceNode_SequenceConstructPosContext>(),
                        {".ctor", {}, {::i2c::type_of<::System::Xml::Schema::SequenceNode*>(), ::i2c::type_of<::System::Xml::Schema::BitSet*>(), ::i2c::type_of<::System::Xml::Schema::BitSet*>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::SequenceNode_SequenceConstructPosContext::_ctor(::System::Xml::Schema::SequenceNode*  node, ::System::Xml::Schema::BitSet*  firstpos, ::System::Xml::Schema::BitSet*  lastpos)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SequenceNode_SequenceConstructPosContext>(),
                        {".ctor", {}, {::i2c::type_of<::System::Xml::Schema::SequenceNode*>(), ::i2c::type_of<::System::Xml::Schema::BitSet*>(), ::i2c::type_of<::System::Xml::Schema::BitSet*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, node, firstpos, lastpos);
}
// Ctor Parameters [CppParam { name: "this_", ty: "::System::Xml::Schema::SequenceNode*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "firstpos", ty: "::System::Xml::Schema::BitSet*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "lastpos", ty: "::System::Xml::Schema::BitSet*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "lastposLeft", ty: "::System::Xml::Schema::BitSet*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "firstposRight", ty: "::System::Xml::Schema::BitSet*", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::SequenceNode_SequenceConstructPosContext::SequenceNode_SequenceConstructPosContext(::System::Xml::Schema::SequenceNode*  this_, ::System::Xml::Schema::BitSet*  firstpos, ::System::Xml::Schema::BitSet*  lastpos, ::System::Xml::Schema::BitSet*  lastposLeft, ::System::Xml::Schema::BitSet*  firstposRight) noexcept  {
this->this_ = this_;
this->firstpos = firstpos;
this->lastpos = lastpos;
this->lastposLeft = lastposLeft;
this->firstposRight = firstposRight;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SequenceNode_SequenceConstructPosContext::SequenceNode_SequenceConstructPosContext()   {
}
