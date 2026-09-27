#pragma once
// IWYU pragma private; include "GlobalNamespace/GestureNode.hpp"
#include "GlobalNamespace/zzzz__GestureAlignment_impl.hpp"
#include "GlobalNamespace/zzzz__GestureDigitFlexion_impl.hpp"
#include "GlobalNamespace/zzzz__GestureHandState_impl.hpp"
#include "GlobalNamespace/zzzz__GestureNodeFlags_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__GestureNode_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::GestureNode._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GestureNode::*)()>(&::GlobalNamespace::GestureNode::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x564ec98;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GestureNode*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& GlobalNamespace::GestureNode::__cordl_internal_get_track()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___track;
}
constexpr bool const& GlobalNamespace::GestureNode::__cordl_internal_get_track() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___track;
}
constexpr void GlobalNamespace::GestureNode::__cordl_internal_set_track(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___track = value;
}
constexpr ::GlobalNamespace::GestureHandState& GlobalNamespace::GestureNode::__cordl_internal_get_state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___state;
}
constexpr ::GlobalNamespace::GestureHandState const& GlobalNamespace::GestureNode::__cordl_internal_get_state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___state;
}
constexpr void GlobalNamespace::GestureNode::__cordl_internal_set_state(::GlobalNamespace::GestureHandState  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___state = value;
}
constexpr ::GlobalNamespace::GestureDigitFlexion& GlobalNamespace::GestureNode::__cordl_internal_get_flexion()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___flexion;
}
constexpr ::GlobalNamespace::GestureDigitFlexion const& GlobalNamespace::GestureNode::__cordl_internal_get_flexion() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___flexion;
}
constexpr void GlobalNamespace::GestureNode::__cordl_internal_set_flexion(::GlobalNamespace::GestureDigitFlexion  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___flexion = value;
}
constexpr ::GlobalNamespace::GestureAlignment& GlobalNamespace::GestureNode::__cordl_internal_get_alignment()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___alignment;
}
constexpr ::GlobalNamespace::GestureAlignment const& GlobalNamespace::GestureNode::__cordl_internal_get_alignment() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___alignment;
}
constexpr void GlobalNamespace::GestureNode::__cordl_internal_set_alignment(::GlobalNamespace::GestureAlignment  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___alignment = value;
}
constexpr ::GlobalNamespace::GestureNodeFlags& GlobalNamespace::GestureNode::__cordl_internal_get_flags()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___flags;
}
constexpr ::GlobalNamespace::GestureNodeFlags const& GlobalNamespace::GestureNode::__cordl_internal_get_flags() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___flags;
}
constexpr void GlobalNamespace::GestureNode::__cordl_internal_set_flags(::GlobalNamespace::GestureNodeFlags  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___flags = value;
}
inline void GlobalNamespace::GestureNode::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GestureNode*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::GestureNode* GlobalNamespace::GestureNode::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GestureNode*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GestureNode::GestureNode()   {
}
