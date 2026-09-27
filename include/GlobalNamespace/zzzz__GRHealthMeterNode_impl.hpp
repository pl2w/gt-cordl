#pragma once
// IWYU pragma private; include "GlobalNamespace/GRHealthMeterNode.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__GRHealthMeterNode_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::GRHealthMeterNode.Setup
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRHealthMeterNode::*)()>(&::GlobalNamespace::GRHealthMeterNode::Setup)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x589e238;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRHealthMeterNode*>(),
                        {"Setup", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRHealthMeterNode.SetEmpty
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRHealthMeterNode::*)(bool)>(&::GlobalNamespace::GRHealthMeterNode::SetEmpty)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x589e144;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRHealthMeterNode*>(),
                        {"SetEmpty", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRHealthMeterNode._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRHealthMeterNode::*)()>(&::GlobalNamespace::GRHealthMeterNode::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x589e248;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRHealthMeterNode*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::GRHealthMeterNode::__cordl_internal_get_showFull()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___showFull;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::GRHealthMeterNode::__cordl_internal_get_showFull() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___showFull;
}
constexpr void GlobalNamespace::GRHealthMeterNode::__cordl_internal_set_showFull(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___showFull = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::GRHealthMeterNode::__cordl_internal_get_showEmpty()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___showEmpty;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::GRHealthMeterNode::__cordl_internal_get_showEmpty() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___showEmpty;
}
constexpr void GlobalNamespace::GRHealthMeterNode::__cordl_internal_set_showEmpty(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___showEmpty = value;
}
constexpr bool& GlobalNamespace::GRHealthMeterNode::__cordl_internal_get_isEmpty()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isEmpty;
}
constexpr bool const& GlobalNamespace::GRHealthMeterNode::__cordl_internal_get_isEmpty() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isEmpty;
}
constexpr void GlobalNamespace::GRHealthMeterNode::__cordl_internal_set_isEmpty(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___isEmpty = value;
}
inline void GlobalNamespace::GRHealthMeterNode::Setup()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRHealthMeterNode*>(),
                        {"Setup", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GRHealthMeterNode::SetEmpty(bool  empty)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRHealthMeterNode*>(),
                        {"SetEmpty", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, empty);
}
inline void GlobalNamespace::GRHealthMeterNode::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRHealthMeterNode*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::GRHealthMeterNode* GlobalNamespace::GRHealthMeterNode::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GRHealthMeterNode*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GRHealthMeterNode::GRHealthMeterNode()   {
}
