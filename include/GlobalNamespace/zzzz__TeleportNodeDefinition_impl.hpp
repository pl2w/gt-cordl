#pragma once
// IWYU pragma private; include "GlobalNamespace/TeleportNodeDefinition.hpp"
#include "UnityEngine/zzzz__ScriptableObject_impl.hpp"
#include "GlobalNamespace/zzzz__TeleportNodeDefinition_def.hpp"
#include "GlobalNamespace/zzzz__TeleportNode_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::TeleportNodeDefinition.get_Forward
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::TeleportNode> (::GlobalNamespace::TeleportNodeDefinition::*)()>(&::GlobalNamespace::TeleportNodeDefinition::get_Forward)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b2d93c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TeleportNodeDefinition*>(),
                        {"get_Forward", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TeleportNodeDefinition.get_Backward
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::TeleportNode> (::GlobalNamespace::TeleportNodeDefinition::*)()>(&::GlobalNamespace::TeleportNodeDefinition::get_Backward)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b2d944;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TeleportNodeDefinition*>(),
                        {"get_Backward", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TeleportNodeDefinition.SetForward
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TeleportNodeDefinition::*)(::GlobalNamespace::TeleportNode*)>(&::GlobalNamespace::TeleportNodeDefinition::SetForward)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x5b2d94c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TeleportNodeDefinition*>(),
                        {"SetForward", {}, {::i2c::type_of<::GlobalNamespace::TeleportNode*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TeleportNodeDefinition.SetBackward
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TeleportNodeDefinition::*)(::GlobalNamespace::TeleportNode*)>(&::GlobalNamespace::TeleportNodeDefinition::SetBackward)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x5b2da04;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TeleportNodeDefinition*>(),
                        {"SetBackward", {}, {::i2c::type_of<::GlobalNamespace::TeleportNode*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TeleportNodeDefinition._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TeleportNodeDefinition::*)()>(&::GlobalNamespace::TeleportNodeDefinition::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b2dabc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TeleportNodeDefinition*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::TeleportNode>& GlobalNamespace::TeleportNodeDefinition::__cordl_internal_get_forward()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___forward;
}
constexpr ::UnityW<::GlobalNamespace::TeleportNode> const& GlobalNamespace::TeleportNodeDefinition::__cordl_internal_get_forward() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___forward;
}
constexpr void GlobalNamespace::TeleportNodeDefinition::__cordl_internal_set_forward(::UnityW<::GlobalNamespace::TeleportNode>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___forward = value;
}
constexpr ::UnityW<::GlobalNamespace::TeleportNode>& GlobalNamespace::TeleportNodeDefinition::__cordl_internal_get_backward()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___backward;
}
constexpr ::UnityW<::GlobalNamespace::TeleportNode> const& GlobalNamespace::TeleportNodeDefinition::__cordl_internal_get_backward() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___backward;
}
constexpr void GlobalNamespace::TeleportNodeDefinition::__cordl_internal_set_backward(::UnityW<::GlobalNamespace::TeleportNode>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___backward = value;
}
inline ::UnityW<::GlobalNamespace::TeleportNode> GlobalNamespace::TeleportNodeDefinition::get_Forward()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TeleportNodeDefinition*>(),
                        {"get_Forward", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::TeleportNode>>(this, ___internal_method);
}
inline ::UnityW<::GlobalNamespace::TeleportNode> GlobalNamespace::TeleportNodeDefinition::get_Backward()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TeleportNodeDefinition*>(),
                        {"get_Backward", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::TeleportNode>>(this, ___internal_method);
}
inline void GlobalNamespace::TeleportNodeDefinition::SetForward(::GlobalNamespace::TeleportNode*  node)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TeleportNodeDefinition*>(),
                        {"SetForward", {}, {::i2c::type_of<::GlobalNamespace::TeleportNode*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, node);
}
inline void GlobalNamespace::TeleportNodeDefinition::SetBackward(::GlobalNamespace::TeleportNode*  node)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TeleportNodeDefinition*>(),
                        {"SetBackward", {}, {::i2c::type_of<::GlobalNamespace::TeleportNode*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, node);
}
inline void GlobalNamespace::TeleportNodeDefinition::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TeleportNodeDefinition*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::TeleportNodeDefinition* GlobalNamespace::TeleportNodeDefinition::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::TeleportNodeDefinition*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::TeleportNodeDefinition::TeleportNodeDefinition()   {
}
