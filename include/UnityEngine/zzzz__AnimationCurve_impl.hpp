#pragma once
// IWYU pragma private; include "UnityEngine/AnimationCurve.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__AnimationCurve_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Bindings/zzzz__BlittableArrayWrapper_def.hpp"
#include "UnityEngine/Bindings/zzzz__ManagedSpanWrapper_def.hpp"
#include "UnityEngine/zzzz__AnimationCurve_def.hpp"
#include "UnityEngine/zzzz__Keyframe_def.hpp"
#include "UnityEngine/zzzz__WrapMode_def.hpp"
//  Writing Method size for method: ::UnityEngine::AnimationCurve.Internal_Destroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr)>(&::UnityEngine::AnimationCurve::Internal_Destroy)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0xb563df8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AnimationCurve*>(),
                        {"Internal_Destroy", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AnimationCurve.Internal_Create
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::ArrayW<::UnityEngine::Keyframe>)>(&::UnityEngine::AnimationCurve::Internal_Create)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0xb563e34;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AnimationCurve*>(),
                        {"Internal_Create", {}, {::i2c::type_of<::ArrayW<::UnityEngine::Keyframe>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AnimationCurve.Internal_Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::AnimationCurve::*)(::System::IntPtr)>(&::UnityEngine::AnimationCurve::Internal_Equals)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xb563f3c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AnimationCurve*>(),
                        {"Internal_Equals", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AnimationCurve.Internal_CopyFrom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AnimationCurve::*)(::System::IntPtr)>(&::UnityEngine::AnimationCurve::Internal_CopyFrom)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xb563fd8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AnimationCurve*>(),
                        {"Internal_CopyFrom", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AnimationCurve.Finalize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AnimationCurve::*)()>(&::UnityEngine::AnimationCurve::Finalize)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0xb564074;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::AnimationCurve*>(),
                    {::i2c::class_of<::UnityEngine::AnimationCurve*>(), 1}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AnimationCurve.Evaluate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::AnimationCurve::*)(float_t)>(&::UnityEngine::AnimationCurve::Evaluate)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0xb564130;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AnimationCurve*>(),
                        {"Evaluate", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AnimationCurve.get_keys
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityEngine::Keyframe> (::UnityEngine::AnimationCurve::*)()>(&::UnityEngine::AnimationCurve::get_keys)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0xb5641dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AnimationCurve*>(),
                        {"get_keys", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AnimationCurve.set_keys
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AnimationCurve::*)(::ArrayW<::UnityEngine::Keyframe>)>(&::UnityEngine::AnimationCurve::set_keys)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0xb564368;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AnimationCurve*>(),
                        {"set_keys", {}, {::i2c::type_of<::ArrayW<::UnityEngine::Keyframe>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AnimationCurve.AddKey
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::AnimationCurve::*)(float_t, float_t)>(&::UnityEngine::AnimationCurve::AddKey)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0xb56449c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AnimationCurve*>(),
                        {"AddKey", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AnimationCurve.AddKey
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::AnimationCurve::*)(::UnityEngine::Keyframe)>(&::UnityEngine::AnimationCurve::AddKey)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0xb564558;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AnimationCurve*>(),
                        {"AddKey", {}, {::i2c::type_of<::UnityEngine::Keyframe>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AnimationCurve.AddKey_Internal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::AnimationCurve::*)(::UnityEngine::Keyframe)>(&::UnityEngine::AnimationCurve::AddKey_Internal)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xb564584;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AnimationCurve*>(),
                        {"AddKey_Internal", {}, {::i2c::type_of<::UnityEngine::Keyframe>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AnimationCurve.MoveKey
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::AnimationCurve::*)(int32_t, ::UnityEngine::Keyframe)>(&::UnityEngine::AnimationCurve::MoveKey)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0xb564620;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AnimationCurve*>(),
                        {"MoveKey", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Keyframe>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AnimationCurve.ClearKeys
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AnimationCurve::*)()>(&::UnityEngine::AnimationCurve::ClearKeys)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0xb5646dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AnimationCurve*>(),
                        {"ClearKeys", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AnimationCurve.RemoveKey
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AnimationCurve::*)(int32_t)>(&::UnityEngine::AnimationCurve::RemoveKey)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xb564768;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AnimationCurve*>(),
                        {"RemoveKey", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AnimationCurve.get_Item
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Keyframe (::UnityEngine::AnimationCurve::*)(int32_t)>(&::UnityEngine::AnimationCurve::get_Item)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0xb564804;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AnimationCurve*>(),
                        {"get_Item", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AnimationCurve.get_length
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::AnimationCurve::*)()>(&::UnityEngine::AnimationCurve::get_length)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0xb5648c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AnimationCurve*>(),
                        {"get_length", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AnimationCurve.GetKey
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Keyframe (::UnityEngine::AnimationCurve::*)(int32_t)>(&::UnityEngine::AnimationCurve::GetKey)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0xb564834;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AnimationCurve*>(),
                        {"GetKey", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AnimationCurve.GetHashCode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::AnimationCurve::*)()>(&::UnityEngine::AnimationCurve::GetHashCode)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0xb5649a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::AnimationCurve*>(),
                    {::i2c::class_of<::UnityEngine::AnimationCurve*>(), 2}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AnimationCurve.SmoothTangents
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AnimationCurve::*)(int32_t, float_t)>(&::UnityEngine::AnimationCurve::SmoothTangents)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0xb564a30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AnimationCurve*>(),
                        {"SmoothTangents", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AnimationCurve.Constant
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::AnimationCurve* (*)(float_t, float_t, float_t)>(&::UnityEngine::AnimationCurve::Constant)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xb564aec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AnimationCurve*>(),
                        {"Constant", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AnimationCurve.Linear
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::AnimationCurve* (*)(float_t, float_t, float_t, float_t)>(&::UnityEngine::AnimationCurve::Linear)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0xb564afc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AnimationCurve*>(),
                        {"Linear", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AnimationCurve.EaseInOut
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::AnimationCurve* (*)(float_t, float_t, float_t, float_t)>(&::UnityEngine::AnimationCurve::EaseInOut)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0xb564c5c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AnimationCurve*>(),
                        {"EaseInOut", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AnimationCurve.get_preWrapMode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::WrapMode (::UnityEngine::AnimationCurve::*)()>(&::UnityEngine::AnimationCurve::get_preWrapMode)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0xb564d70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AnimationCurve*>(),
                        {"get_preWrapMode", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AnimationCurve.get_postWrapMode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::WrapMode (::UnityEngine::AnimationCurve::*)()>(&::UnityEngine::AnimationCurve::get_postWrapMode)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0xb564dfc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AnimationCurve*>(),
                        {"get_postWrapMode", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AnimationCurve._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AnimationCurve::*)(::ArrayW<::UnityEngine::Keyframe>)>(&::UnityEngine::AnimationCurve::_ctor)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xb564c24;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AnimationCurve*>(),
                        {".ctor", {}, {::i2c::type_of<::ArrayW<::UnityEngine::Keyframe>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AnimationCurve._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AnimationCurve::*)()>(&::UnityEngine::AnimationCurve::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0xb564e88;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AnimationCurve*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AnimationCurve._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AnimationCurve::*)(::System::IntPtr, bool)>(&::UnityEngine::AnimationCurve::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0xb564eb4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AnimationCurve*>(),
                        {".ctor", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AnimationCurve.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::AnimationCurve::*)(::System::Object*)>(&::UnityEngine::AnimationCurve::Equals)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0xb564ee4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::AnimationCurve*>(),
                    {::i2c::class_of<::UnityEngine::AnimationCurve*>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AnimationCurve.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::AnimationCurve::*)(::UnityEngine::AnimationCurve*)>(&::UnityEngine::AnimationCurve::Equals)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0xb564fe4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AnimationCurve*>(),
                        {"Equals", {}, {::i2c::type_of<::UnityEngine::AnimationCurve*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AnimationCurve.CopyFrom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AnimationCurve::*)(::UnityEngine::AnimationCurve*)>(&::UnityEngine::AnimationCurve::CopyFrom)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xb56505c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AnimationCurve*>(),
                        {"CopyFrom", {}, {::i2c::type_of<::UnityEngine::AnimationCurve*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AnimationCurve.Internal_Create_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>)>(&::UnityEngine::AnimationCurve::Internal_Create_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0xb563f00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AnimationCurve*>(),
                        {"Internal_Create_Injected", {}, {::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AnimationCurve.Internal_Equals_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::IntPtr, ::System::IntPtr)>(&::UnityEngine::AnimationCurve::Internal_Equals_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0xb563f94;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AnimationCurve*>(),
                        {"Internal_Equals_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AnimationCurve.Internal_CopyFrom_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::System::IntPtr)>(&::UnityEngine::AnimationCurve::Internal_CopyFrom_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0xb564030;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AnimationCurve*>(),
                        {"Internal_CopyFrom_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AnimationCurve.Evaluate_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(::System::IntPtr, float_t)>(&::UnityEngine::AnimationCurve::Evaluate_Injected)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0xb564190;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AnimationCurve*>(),
                        {"Evaluate_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AnimationCurve.get_keys_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper>)>(&::UnityEngine::AnimationCurve::get_keys_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0xb564324;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AnimationCurve*>(),
                        {"get_keys_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AnimationCurve.set_keys_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>)>(&::UnityEngine::AnimationCurve::set_keys_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0xb564458;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AnimationCurve*>(),
                        {"set_keys_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AnimationCurve.AddKey_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr, float_t, float_t)>(&::UnityEngine::AnimationCurve::AddKey_Injected)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0xb564504;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AnimationCurve*>(),
                        {"AddKey_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AnimationCurve.AddKey_Internal_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr, ::by_ref<::UnityEngine::Keyframe>)>(&::UnityEngine::AnimationCurve::AddKey_Internal_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0xb5645dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AnimationCurve*>(),
                        {"AddKey_Internal_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Keyframe>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AnimationCurve.MoveKey_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr, int32_t, ::by_ref<::UnityEngine::Keyframe>)>(&::UnityEngine::AnimationCurve::MoveKey_Injected)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0xb564688;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AnimationCurve*>(),
                        {"MoveKey_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Keyframe>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AnimationCurve.ClearKeys_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr)>(&::UnityEngine::AnimationCurve::ClearKeys_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0xb56472c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AnimationCurve*>(),
                        {"ClearKeys_Injected", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AnimationCurve.RemoveKey_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, int32_t)>(&::UnityEngine::AnimationCurve::RemoveKey_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0xb5647c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AnimationCurve*>(),
                        {"RemoveKey_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AnimationCurve.get_length_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr)>(&::UnityEngine::AnimationCurve::get_length_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0xb564914;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AnimationCurve*>(),
                        {"get_length_Injected", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AnimationCurve.GetKey_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, int32_t, ::by_ref<::UnityEngine::Keyframe>)>(&::UnityEngine::AnimationCurve::GetKey_Injected)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0xb564950;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AnimationCurve*>(),
                        {"GetKey_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Keyframe>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AnimationCurve.GetHashCode_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr)>(&::UnityEngine::AnimationCurve::GetHashCode_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0xb5649f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AnimationCurve*>(),
                        {"GetHashCode_Injected", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AnimationCurve.SmoothTangents_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, int32_t, float_t)>(&::UnityEngine::AnimationCurve::SmoothTangents_Injected)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0xb564a98;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AnimationCurve*>(),
                        {"SmoothTangents_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AnimationCurve.get_preWrapMode_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::WrapMode (*)(::System::IntPtr)>(&::UnityEngine::AnimationCurve::get_preWrapMode_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0xb564dc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AnimationCurve*>(),
                        {"get_preWrapMode_Injected", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AnimationCurve.get_postWrapMode_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::WrapMode (*)(::System::IntPtr)>(&::UnityEngine::AnimationCurve::get_postWrapMode_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0xb564e4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AnimationCurve*>(),
                        {"get_postWrapMode_Injected", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::IntPtr& UnityEngine::AnimationCurve::__cordl_internal_get_m_Ptr()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Ptr;
}
constexpr ::System::IntPtr const& UnityEngine::AnimationCurve::__cordl_internal_get_m_Ptr() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Ptr;
}
constexpr void UnityEngine::AnimationCurve::__cordl_internal_set_m_Ptr(::System::IntPtr  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Ptr = value;
}
constexpr bool& UnityEngine::AnimationCurve::__cordl_internal_get_m_RequiresNativeCleanup()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_RequiresNativeCleanup;
}
constexpr bool const& UnityEngine::AnimationCurve::__cordl_internal_get_m_RequiresNativeCleanup() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_RequiresNativeCleanup;
}
constexpr void UnityEngine::AnimationCurve::__cordl_internal_set_m_RequiresNativeCleanup(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_RequiresNativeCleanup = value;
}
inline void UnityEngine::AnimationCurve::Internal_Destroy(::System::IntPtr  ptr)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AnimationCurve*>(),
                        {"Internal_Destroy", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, ptr);
}
inline ::System::IntPtr UnityEngine::AnimationCurve::Internal_Create(::ArrayW<::UnityEngine::Keyframe>  keys)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AnimationCurve*>(),
                        {"Internal_Create", {}, {::i2c::type_of<::ArrayW<::UnityEngine::Keyframe>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, keys);
}
inline bool UnityEngine::AnimationCurve::Internal_Equals(::System::IntPtr  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AnimationCurve*>(),
                        {"Internal_Equals", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, other);
}
inline void UnityEngine::AnimationCurve::Internal_CopyFrom(::System::IntPtr  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AnimationCurve*>(),
                        {"Internal_CopyFrom", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, other);
}
inline void UnityEngine::AnimationCurve::Finalize()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::AnimationCurve*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline float_t UnityEngine::AnimationCurve::Evaluate(float_t  time)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AnimationCurve*>(),
                        {"Evaluate", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, time);
}
inline ::ArrayW<::UnityEngine::Keyframe> UnityEngine::AnimationCurve::get_keys()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AnimationCurve*>(),
                        {"get_keys", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::Keyframe>>(this, ___internal_method);
}
inline void UnityEngine::AnimationCurve::set_keys(::ArrayW<::UnityEngine::Keyframe>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AnimationCurve*>(),
                        {"set_keys", {}, {::i2c::type_of<::ArrayW<::UnityEngine::Keyframe>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t UnityEngine::AnimationCurve::AddKey(float_t  time, float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AnimationCurve*>(),
                        {"AddKey", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, time, value);
}
inline int32_t UnityEngine::AnimationCurve::AddKey(::UnityEngine::Keyframe  key)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AnimationCurve*>(),
                        {"AddKey", {}, {::i2c::type_of<::UnityEngine::Keyframe>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, key);
}
inline int32_t UnityEngine::AnimationCurve::AddKey_Internal(::UnityEngine::Keyframe  key)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AnimationCurve*>(),
                        {"AddKey_Internal", {}, {::i2c::type_of<::UnityEngine::Keyframe>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, key);
}
inline int32_t UnityEngine::AnimationCurve::MoveKey(int32_t  index, ::UnityEngine::Keyframe  key)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AnimationCurve*>(),
                        {"MoveKey", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Keyframe>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, index, key);
}
inline void UnityEngine::AnimationCurve::ClearKeys()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AnimationCurve*>(),
                        {"ClearKeys", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::AnimationCurve::RemoveKey(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AnimationCurve*>(),
                        {"RemoveKey", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, index);
}
inline ::UnityEngine::Keyframe UnityEngine::AnimationCurve::get_Item(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AnimationCurve*>(),
                        {"get_Item", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Keyframe>(this, ___internal_method, index);
}
inline int32_t UnityEngine::AnimationCurve::get_length()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AnimationCurve*>(),
                        {"get_length", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::UnityEngine::Keyframe UnityEngine::AnimationCurve::GetKey(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AnimationCurve*>(),
                        {"GetKey", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Keyframe>(this, ___internal_method, index);
}
inline int32_t UnityEngine::AnimationCurve::GetHashCode()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::AnimationCurve*>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void UnityEngine::AnimationCurve::SmoothTangents(int32_t  index, float_t  weight)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AnimationCurve*>(),
                        {"SmoothTangents", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, index, weight);
}
inline ::UnityEngine::AnimationCurve* UnityEngine::AnimationCurve::Constant(float_t  timeStart, float_t  timeEnd, float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AnimationCurve*>(),
                        {"Constant", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::AnimationCurve*>(nullptr, ___internal_method, timeStart, timeEnd, value);
}
inline ::UnityEngine::AnimationCurve* UnityEngine::AnimationCurve::Linear(float_t  timeStart, float_t  valueStart, float_t  timeEnd, float_t  valueEnd)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AnimationCurve*>(),
                        {"Linear", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::AnimationCurve*>(nullptr, ___internal_method, timeStart, valueStart, timeEnd, valueEnd);
}
inline ::UnityEngine::AnimationCurve* UnityEngine::AnimationCurve::EaseInOut(float_t  timeStart, float_t  valueStart, float_t  timeEnd, float_t  valueEnd)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AnimationCurve*>(),
                        {"EaseInOut", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::AnimationCurve*>(nullptr, ___internal_method, timeStart, valueStart, timeEnd, valueEnd);
}
inline ::UnityEngine::WrapMode UnityEngine::AnimationCurve::get_preWrapMode()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AnimationCurve*>(),
                        {"get_preWrapMode", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::WrapMode>(this, ___internal_method);
}
inline ::UnityEngine::WrapMode UnityEngine::AnimationCurve::get_postWrapMode()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AnimationCurve*>(),
                        {"get_postWrapMode", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::WrapMode>(this, ___internal_method);
}
inline void UnityEngine::AnimationCurve::_ctor(/* [ParamArray] */ ::ArrayW<::UnityEngine::Keyframe>  keys)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AnimationCurve*>(),
                        {".ctor", {}, {::i2c::type_of<::ArrayW<::UnityEngine::Keyframe>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, keys);
}
inline void UnityEngine::AnimationCurve::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AnimationCurve*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::AnimationCurve::_ctor(::System::IntPtr  ptr, bool  ownMemory)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AnimationCurve*>(),
                        {".ctor", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ptr, ownMemory);
}
inline bool UnityEngine::AnimationCurve::Equals(::System::Object*  o)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::AnimationCurve*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, o);
}
inline bool UnityEngine::AnimationCurve::Equals(::UnityEngine::AnimationCurve*  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AnimationCurve*>(),
                        {"Equals", {}, {::i2c::type_of<::UnityEngine::AnimationCurve*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, other);
}
inline void UnityEngine::AnimationCurve::CopyFrom(::UnityEngine::AnimationCurve*  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AnimationCurve*>(),
                        {"CopyFrom", {}, {::i2c::type_of<::UnityEngine::AnimationCurve*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, other);
}
inline ::System::IntPtr UnityEngine::AnimationCurve::Internal_Create_Injected(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  keys)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AnimationCurve*>(),
                        {"Internal_Create_Injected", {}, {::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, keys);
}
inline bool UnityEngine::AnimationCurve::Internal_Equals_Injected(::System::IntPtr  _unity_self, ::System::IntPtr  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AnimationCurve*>(),
                        {"Internal_Equals_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, _unity_self, other);
}
inline void UnityEngine::AnimationCurve::Internal_CopyFrom_Injected(::System::IntPtr  _unity_self, ::System::IntPtr  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AnimationCurve*>(),
                        {"Internal_CopyFrom_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, other);
}
inline float_t UnityEngine::AnimationCurve::Evaluate_Injected(::System::IntPtr  _unity_self, float_t  time)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AnimationCurve*>(),
                        {"Evaluate_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, _unity_self, time);
}
inline void UnityEngine::AnimationCurve::get_keys_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper>  ret)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AnimationCurve*>(),
                        {"get_keys_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, ret);
}
inline void UnityEngine::AnimationCurve::set_keys_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AnimationCurve*>(),
                        {"set_keys_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, value);
}
inline int32_t UnityEngine::AnimationCurve::AddKey_Injected(::System::IntPtr  _unity_self, float_t  time, float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AnimationCurve*>(),
                        {"AddKey_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, _unity_self, time, value);
}
inline int32_t UnityEngine::AnimationCurve::AddKey_Internal_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Keyframe>  key)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AnimationCurve*>(),
                        {"AddKey_Internal_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Keyframe>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, _unity_self, key);
}
inline int32_t UnityEngine::AnimationCurve::MoveKey_Injected(::System::IntPtr  _unity_self, int32_t  index, ::by_ref<::UnityEngine::Keyframe>  key)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AnimationCurve*>(),
                        {"MoveKey_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Keyframe>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, _unity_self, index, key);
}
inline void UnityEngine::AnimationCurve::ClearKeys_Injected(::System::IntPtr  _unity_self)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AnimationCurve*>(),
                        {"ClearKeys_Injected", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::AnimationCurve::RemoveKey_Injected(::System::IntPtr  _unity_self, int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AnimationCurve*>(),
                        {"RemoveKey_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, index);
}
inline int32_t UnityEngine::AnimationCurve::get_length_Injected(::System::IntPtr  _unity_self)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AnimationCurve*>(),
                        {"get_length_Injected", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::AnimationCurve::GetKey_Injected(::System::IntPtr  _unity_self, int32_t  index, ::by_ref<::UnityEngine::Keyframe>  ret)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AnimationCurve*>(),
                        {"GetKey_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Keyframe>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, index, ret);
}
inline int32_t UnityEngine::AnimationCurve::GetHashCode_Injected(::System::IntPtr  _unity_self)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AnimationCurve*>(),
                        {"GetHashCode_Injected", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::AnimationCurve::SmoothTangents_Injected(::System::IntPtr  _unity_self, int32_t  index, float_t  weight)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AnimationCurve*>(),
                        {"SmoothTangents_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, index, weight);
}
inline ::UnityEngine::WrapMode UnityEngine::AnimationCurve::get_preWrapMode_Injected(::System::IntPtr  _unity_self)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AnimationCurve*>(),
                        {"get_preWrapMode_Injected", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::WrapMode>(nullptr, ___internal_method, _unity_self);
}
inline ::UnityEngine::WrapMode UnityEngine::AnimationCurve::get_postWrapMode_Injected(::System::IntPtr  _unity_self)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AnimationCurve*>(),
                        {"get_postWrapMode_Injected", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::WrapMode>(nullptr, ___internal_method, _unity_self);
}
inline ::UnityEngine::AnimationCurve* UnityEngine::AnimationCurve::New_ctor(/* [ParamArray] */ ::ArrayW<::UnityEngine::Keyframe>  keys)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::AnimationCurve*>(keys));
}
/// @brief [RequiredByNativeCode]
inline ::UnityEngine::AnimationCurve* UnityEngine::AnimationCurve::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::AnimationCurve*>());
}
/// @brief [VisibleToOtherModules(new[] { "UnityEngine.ParticleSystemModule" })]
inline ::UnityEngine::AnimationCurve* UnityEngine::AnimationCurve::New_ctor(::System::IntPtr  ptr, bool  ownMemory)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::AnimationCurve*>(ptr, ownMemory));
}
/// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::AnimationCurve*>"
constexpr  UnityEngine::AnimationCurve::operator ::System::IEquatable_1<::UnityEngine::AnimationCurve*>*() noexcept {
return static_cast<::System::IEquatable_1<::UnityEngine::AnimationCurve*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IEquatable_1<::UnityEngine::AnimationCurve*>"
constexpr ::System::IEquatable_1<::UnityEngine::AnimationCurve*>* UnityEngine::AnimationCurve::i___System__IEquatable_1___UnityEngine__AnimationCurve__() noexcept {
return static_cast<::System::IEquatable_1<::UnityEngine::AnimationCurve*>*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::AnimationCurve::AnimationCurve()   {
}
//  Writing Method size for method: ::UnityEngine::AnimationCurve_BindingsMarshaller.ConvertToManaged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::AnimationCurve* (*)(::System::IntPtr)>(&::UnityEngine::AnimationCurve_BindingsMarshaller::ConvertToManaged)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0xb565070;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AnimationCurve_BindingsMarshaller*>(),
                        {"ConvertToManaged", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AnimationCurve_BindingsMarshaller.ConvertToNative
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::UnityEngine::AnimationCurve*)>(&::UnityEngine::AnimationCurve_BindingsMarshaller::ConvertToNative)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xb5650d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AnimationCurve_BindingsMarshaller*>(),
                        {"ConvertToNative", {}, {::i2c::type_of<::UnityEngine::AnimationCurve*>()}}
                    )));
    return ___internal_method;
  }
};
inline ::UnityEngine::AnimationCurve* UnityEngine::AnimationCurve_BindingsMarshaller::ConvertToManaged(::System::IntPtr  ptr)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AnimationCurve_BindingsMarshaller*>(),
                        {"ConvertToManaged", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::AnimationCurve*>(nullptr, ___internal_method, ptr);
}
inline ::System::IntPtr UnityEngine::AnimationCurve_BindingsMarshaller::ConvertToNative(::UnityEngine::AnimationCurve*  animationCurve)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AnimationCurve_BindingsMarshaller*>(),
                        {"ConvertToNative", {}, {::i2c::type_of<::UnityEngine::AnimationCurve*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, animationCurve);
}
// Ctor Parameters []
constexpr ::UnityEngine::AnimationCurve_BindingsMarshaller::AnimationCurve_BindingsMarshaller()   {
}
