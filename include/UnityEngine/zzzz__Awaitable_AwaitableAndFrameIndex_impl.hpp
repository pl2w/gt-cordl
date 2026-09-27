#pragma once
// IWYU pragma private; include "UnityEngine/Awaitable_AwaitableAndFrameIndex.hpp"
#include "UnityEngine/zzzz__Awaitable_AwaitableAndFrameIndex_def.hpp"
#include "UnityEngine/zzzz__Awaitable_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::Awaitable_AwaitableAndFrameIndex.get_Awaitable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Awaitable* (::GlobalNamespace::Awaitable_AwaitableAndFrameIndex::*)()>(&::GlobalNamespace::Awaitable_AwaitableAndFrameIndex::get_Awaitable)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb5db338;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Awaitable_AwaitableAndFrameIndex>(),
                        {"get_Awaitable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Awaitable_AwaitableAndFrameIndex.get_FrameIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::Awaitable_AwaitableAndFrameIndex::*)()>(&::GlobalNamespace::Awaitable_AwaitableAndFrameIndex::get_FrameIndex)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb5db340;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Awaitable_AwaitableAndFrameIndex>(),
                        {"get_FrameIndex", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Awaitable_AwaitableAndFrameIndex._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Awaitable_AwaitableAndFrameIndex::*)(::UnityEngine::Awaitable*, int32_t)>(&::GlobalNamespace::Awaitable_AwaitableAndFrameIndex::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xb5db348;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Awaitable_AwaitableAndFrameIndex>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::Awaitable*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
inline ::UnityEngine::Awaitable* GlobalNamespace::Awaitable_AwaitableAndFrameIndex::get_Awaitable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Awaitable_AwaitableAndFrameIndex>(),
                        {"get_Awaitable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Awaitable*>(*this, ___internal_method);
}
inline int32_t GlobalNamespace::Awaitable_AwaitableAndFrameIndex::get_FrameIndex()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Awaitable_AwaitableAndFrameIndex>(),
                        {"get_FrameIndex", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline void GlobalNamespace::Awaitable_AwaitableAndFrameIndex::_ctor(::UnityEngine::Awaitable*  awaitable, int32_t  frameIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Awaitable_AwaitableAndFrameIndex>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::Awaitable*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, awaitable, frameIndex);
}
// Ctor Parameters [CppParam { name: "_Awaitable_k__BackingField", ty: "::UnityEngine::Awaitable*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_FrameIndex_k__BackingField", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::Awaitable_AwaitableAndFrameIndex::Awaitable_AwaitableAndFrameIndex(::UnityEngine::Awaitable*  _Awaitable_k__BackingField, int32_t  _FrameIndex_k__BackingField) noexcept  {
this->_Awaitable_k__BackingField = _Awaitable_k__BackingField;
this->_FrameIndex_k__BackingField = _FrameIndex_k__BackingField;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::Awaitable_AwaitableAndFrameIndex::Awaitable_AwaitableAndFrameIndex()   {
}
