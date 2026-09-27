#pragma once
// IWYU pragma private; include "UnityEngine/Debug.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Debug_def.hpp"
#include "System/zzzz__Exception_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Bindings/zzzz__ManagedSpanWrapper_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__ILogger_def.hpp"
#include "UnityEngine/zzzz__LogOption_def.hpp"
#include "UnityEngine/zzzz__LogType_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::UnityEngine::Debug.get_unityLogger
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::ILogger* (*)()>(&::UnityEngine::Debug::get_unityLogger)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xb56f9c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Debug*>(),
                        {"get_unityLogger", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Debug.DrawLine
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Color, float_t)>(&::UnityEngine::Debug::DrawLine)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0xb56fa20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Debug*>(),
                        {"DrawLine", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Color>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Debug.DrawLine
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Color)>(&::UnityEngine::Debug::DrawLine)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0xb56fbd4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Debug*>(),
                        {"DrawLine", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Debug.DrawLine
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Vector3, ::UnityEngine::Vector3)>(&::UnityEngine::Debug::DrawLine)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xb56fcb4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Debug*>(),
                        {"DrawLine", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Debug.DrawLine
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Color, float_t, bool)>(&::UnityEngine::Debug::DrawLine)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0xb56fb20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Debug*>(),
                        {"DrawLine", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Color>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Debug.DrawRay
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Color, float_t)>(&::UnityEngine::Debug::DrawRay)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0xb56fdd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Debug*>(),
                        {"DrawRay", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Color>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Debug.DrawRay
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Color)>(&::UnityEngine::Debug::DrawRay)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0xb56ffc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Debug*>(),
                        {"DrawRay", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Debug.DrawRay
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Color, float_t, bool)>(&::UnityEngine::Debug::DrawRay)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0xb56fed0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Debug*>(),
                        {"DrawRay", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Color>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Debug.Break
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::UnityEngine::Debug::Break)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xb5700a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Debug*>(),
                        {"Break", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Debug.ExtractStackTraceNoAlloc
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(uint8_t*, int32_t, ::StringW)>(&::UnityEngine::Debug::ExtractStackTraceNoAlloc)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0xb5700c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Debug*>(),
                        {"ExtractStackTraceNoAlloc", {}, {::i2c::type_of<uint8_t*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Debug.Log
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Object*)>(&::UnityEngine::Debug::Log)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0xb5702cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Debug*>(),
                        {"Log", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Debug.Log
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Object*, ::UnityEngine::Object*)>(&::UnityEngine::Debug::Log)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0xb5703d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Debug*>(),
                        {"Log", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::UnityEngine::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Debug.LogFormat
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW, ::ArrayW<::System::Object*>)>(&::UnityEngine::Debug::LogFormat)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0xb5704ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Debug*>(),
                        {"LogFormat", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::System::Object*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Debug.LogFormat
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Object*, ::StringW, ::ArrayW<::System::Object*>)>(&::UnityEngine::Debug::LogFormat)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0xb570604;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Debug*>(),
                        {"LogFormat", {}, {::i2c::type_of<::UnityEngine::Object*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::System::Object*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Debug.LogFormat
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::LogType, ::UnityEngine::LogOption, ::UnityEngine::Object*, ::StringW, ::ArrayW<::System::Object*>)>(&::UnityEngine::Debug::LogFormat)> {
  constexpr static std::size_t size = 0x314;
  constexpr static std::size_t addrs = 0xb570720;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Debug*>(),
                        {"LogFormat", {}, {::i2c::type_of<::UnityEngine::LogType>(), ::i2c::type_of<::UnityEngine::LogOption>(), ::i2c::type_of<::UnityEngine::Object*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::System::Object*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Debug.LogError
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Object*)>(&::UnityEngine::Debug::LogError)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0xb570a34;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Debug*>(),
                        {"LogError", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Debug.LogError
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Object*, ::UnityEngine::Object*)>(&::UnityEngine::Debug::LogError)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0xb570b3c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Debug*>(),
                        {"LogError", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::UnityEngine::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Debug.LogErrorFormat
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW, ::ArrayW<::System::Object*>)>(&::UnityEngine::Debug::LogErrorFormat)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0xb570c54;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Debug*>(),
                        {"LogErrorFormat", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::System::Object*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Debug.LogErrorFormat
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Object*, ::StringW, ::ArrayW<::System::Object*>)>(&::UnityEngine::Debug::LogErrorFormat)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0xb570d6c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Debug*>(),
                        {"LogErrorFormat", {}, {::i2c::type_of<::UnityEngine::Object*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::System::Object*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Debug.LogException
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Exception*)>(&::UnityEngine::Debug::LogException)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0xb567314;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Debug*>(),
                        {"LogException", {}, {::i2c::type_of<::System::Exception*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Debug.LogException
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Exception*, ::UnityEngine::Object*)>(&::UnityEngine::Debug::LogException)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0xb560780;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Debug*>(),
                        {"LogException", {}, {::i2c::type_of<::System::Exception*>(), ::i2c::type_of<::UnityEngine::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Debug.LogWarning
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Object*)>(&::UnityEngine::Debug::LogWarning)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0xb56d588;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Debug*>(),
                        {"LogWarning", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Debug.LogWarning
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Object*, ::UnityEngine::Object*)>(&::UnityEngine::Debug::LogWarning)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0xb570e88;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Debug*>(),
                        {"LogWarning", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::UnityEngine::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Debug.LogWarningFormat
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW, ::ArrayW<::System::Object*>)>(&::UnityEngine::Debug::LogWarningFormat)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0xb570fa0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Debug*>(),
                        {"LogWarningFormat", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::System::Object*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Debug.LogWarningFormat
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Object*, ::StringW, ::ArrayW<::System::Object*>)>(&::UnityEngine::Debug::LogWarningFormat)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0xb5710b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Debug*>(),
                        {"LogWarningFormat", {}, {::i2c::type_of<::UnityEngine::Object*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::System::Object*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Debug._cordl_Assert
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(bool)>(&::UnityEngine::Debug::_cordl_Assert)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0xb5711d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Debug*>(),
                        {"Assert", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Debug._cordl_Assert
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(bool, ::StringW)>(&::UnityEngine::Debug::_cordl_Assert)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0xb571304;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Debug*>(),
                        {"Assert", {}, {::i2c::type_of<bool>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Debug.AssertFormat
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(bool, ::StringW, ::ArrayW<::System::Object*>)>(&::UnityEngine::Debug::AssertFormat)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0xb571420;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Debug*>(),
                        {"AssertFormat", {}, {::i2c::type_of<bool>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::System::Object*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Debug.LogAssertion
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Object*)>(&::UnityEngine::Debug::LogAssertion)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0xb571550;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Debug*>(),
                        {"LogAssertion", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Debug.LogAssertionFormat
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW, ::ArrayW<::System::Object*>)>(&::UnityEngine::Debug::LogAssertionFormat)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0xb571658;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Debug*>(),
                        {"LogAssertionFormat", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::System::Object*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Debug.get_isDebugBuild
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::UnityEngine::Debug::get_isDebugBuild)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xb571770;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Debug*>(),
                        {"get_isDebugBuild", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Debug.CallOverridenDebugHandler
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Exception*, ::UnityEngine::Object*)>(&::UnityEngine::Debug::CallOverridenDebugHandler)> {
  constexpr static std::size_t size = 0x330;
  constexpr static std::size_t addrs = 0xb571798;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Debug*>(),
                        {"CallOverridenDebugHandler", {}, {::i2c::type_of<::System::Exception*>(), ::i2c::type_of<::UnityEngine::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Debug.IsLoggingEnabled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::UnityEngine::Debug::IsLoggingEnabled)> {
  constexpr static std::size_t size = 0x224;
  constexpr static std::size_t addrs = 0xb571ac8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Debug*>(),
                        {"IsLoggingEnabled", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Debug.DrawLine_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::UnityEngine::Vector3>, ::by_ref<::UnityEngine::Vector3>, ::by_ref<::UnityEngine::Color>, float_t, bool)>(&::UnityEngine::Debug::DrawLine_Injected)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0xb56fd64;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Debug*>(),
                        {"DrawLine_Injected", {}, {::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Color>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Debug.ExtractStackTraceNoAlloc_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(uint8_t*, int32_t, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>)>(&::UnityEngine::Debug::ExtractStackTraceNoAlloc_Injected)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0xb570278;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Debug*>(),
                        {"ExtractStackTraceNoAlloc_Injected", {}, {::i2c::type_of<uint8_t*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>()}}
                    )));
    return ___internal_method;
  }
};
inline void UnityEngine::Debug::setStaticF_s_DefaultLogger(::UnityEngine::ILogger*  value)  {
::cordl_internals::setStaticField<::UnityEngine::ILogger*, "s_DefaultLogger", ::UnityEngine::Debug*>(std::forward<::UnityEngine::ILogger*>(value));
}
inline ::UnityEngine::ILogger* UnityEngine::Debug::getStaticF_s_DefaultLogger()  {
return ::cordl_internals::getStaticField<::UnityEngine::ILogger*, "s_DefaultLogger", ::UnityEngine::Debug*>();
}
inline void UnityEngine::Debug::setStaticF_s_Logger(::UnityEngine::ILogger*  value)  {
::cordl_internals::setStaticField<::UnityEngine::ILogger*, "s_Logger", ::UnityEngine::Debug*>(std::forward<::UnityEngine::ILogger*>(value));
}
inline ::UnityEngine::ILogger* UnityEngine::Debug::getStaticF_s_Logger()  {
return ::cordl_internals::getStaticField<::UnityEngine::ILogger*, "s_Logger", ::UnityEngine::Debug*>();
}
inline ::UnityEngine::ILogger* UnityEngine::Debug::get_unityLogger()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Debug*>(),
                        {"get_unityLogger", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::ILogger*>(nullptr, ___internal_method);
}
inline void UnityEngine::Debug::DrawLine(::UnityEngine::Vector3  start, ::UnityEngine::Vector3  end, ::UnityEngine::Color  color, float_t  duration)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Debug*>(),
                        {"DrawLine", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Color>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, start, end, color, duration);
}
inline void UnityEngine::Debug::DrawLine(::UnityEngine::Vector3  start, ::UnityEngine::Vector3  end, ::UnityEngine::Color  color)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Debug*>(),
                        {"DrawLine", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, start, end, color);
}
inline void UnityEngine::Debug::DrawLine(::UnityEngine::Vector3  start, ::UnityEngine::Vector3  end)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Debug*>(),
                        {"DrawLine", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, start, end);
}
inline void UnityEngine::Debug::DrawLine(::UnityEngine::Vector3  start, ::UnityEngine::Vector3  end, /* [DefaultValue("Color.white")] */ ::UnityEngine::Color  color, /* [DefaultValue("0.0f")] */ float_t  duration, /* [DefaultValue("true")] */ bool  depthTest)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Debug*>(),
                        {"DrawLine", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Color>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, start, end, color, duration, depthTest);
}
inline void UnityEngine::Debug::DrawRay(::UnityEngine::Vector3  start, ::UnityEngine::Vector3  dir, ::UnityEngine::Color  color, float_t  duration)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Debug*>(),
                        {"DrawRay", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Color>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, start, dir, color, duration);
}
inline void UnityEngine::Debug::DrawRay(::UnityEngine::Vector3  start, ::UnityEngine::Vector3  dir, ::UnityEngine::Color  color)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Debug*>(),
                        {"DrawRay", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, start, dir, color);
}
inline void UnityEngine::Debug::DrawRay(::UnityEngine::Vector3  start, ::UnityEngine::Vector3  dir, /* [DefaultValue("Color.white")] */ ::UnityEngine::Color  color, /* [DefaultValue("0.0f")] */ float_t  duration, /* [DefaultValue("true")] */ bool  depthTest)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Debug*>(),
                        {"DrawRay", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Color>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, start, dir, color, duration, depthTest);
}
inline void UnityEngine::Debug::Break()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Debug*>(),
                        {"Break", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline int32_t UnityEngine::Debug::ExtractStackTraceNoAlloc(uint8_t*  buffer, int32_t  bufferMax, ::StringW  projectFolder)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Debug*>(),
                        {"ExtractStackTraceNoAlloc", {}, {::i2c::type_of<uint8_t*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, buffer, bufferMax, projectFolder);
}
inline void UnityEngine::Debug::Log(::System::Object*  message)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Debug*>(),
                        {"Log", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, message);
}
inline void UnityEngine::Debug::Log(::System::Object*  message, ::UnityEngine::Object*  context)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Debug*>(),
                        {"Log", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::UnityEngine::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, message, context);
}
inline void UnityEngine::Debug::LogFormat(::StringW  format, /* [ParamArray] */ ::ArrayW<::System::Object*>  args)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Debug*>(),
                        {"LogFormat", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::System::Object*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, format, args);
}
inline void UnityEngine::Debug::LogFormat(::UnityEngine::Object*  context, ::StringW  format, /* [ParamArray] */ ::ArrayW<::System::Object*>  args)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Debug*>(),
                        {"LogFormat", {}, {::i2c::type_of<::UnityEngine::Object*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::System::Object*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, context, format, args);
}
inline void UnityEngine::Debug::LogFormat(::UnityEngine::LogType  logType, ::UnityEngine::LogOption  logOptions, ::UnityEngine::Object*  context, ::StringW  format, /* [ParamArray] */ ::ArrayW<::System::Object*>  args)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Debug*>(),
                        {"LogFormat", {}, {::i2c::type_of<::UnityEngine::LogType>(), ::i2c::type_of<::UnityEngine::LogOption>(), ::i2c::type_of<::UnityEngine::Object*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::System::Object*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, logType, logOptions, context, format, args);
}
inline void UnityEngine::Debug::LogError(::System::Object*  message)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Debug*>(),
                        {"LogError", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, message);
}
inline void UnityEngine::Debug::LogError(::System::Object*  message, ::UnityEngine::Object*  context)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Debug*>(),
                        {"LogError", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::UnityEngine::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, message, context);
}
inline void UnityEngine::Debug::LogErrorFormat(::StringW  format, /* [ParamArray] */ ::ArrayW<::System::Object*>  args)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Debug*>(),
                        {"LogErrorFormat", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::System::Object*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, format, args);
}
inline void UnityEngine::Debug::LogErrorFormat(::UnityEngine::Object*  context, ::StringW  format, /* [ParamArray] */ ::ArrayW<::System::Object*>  args)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Debug*>(),
                        {"LogErrorFormat", {}, {::i2c::type_of<::UnityEngine::Object*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::System::Object*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, context, format, args);
}
inline void UnityEngine::Debug::LogException(::System::Exception*  exception)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Debug*>(),
                        {"LogException", {}, {::i2c::type_of<::System::Exception*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, exception);
}
inline void UnityEngine::Debug::LogException(::System::Exception*  exception, ::UnityEngine::Object*  context)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Debug*>(),
                        {"LogException", {}, {::i2c::type_of<::System::Exception*>(), ::i2c::type_of<::UnityEngine::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, exception, context);
}
inline void UnityEngine::Debug::LogWarning(::System::Object*  message)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Debug*>(),
                        {"LogWarning", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, message);
}
inline void UnityEngine::Debug::LogWarning(::System::Object*  message, ::UnityEngine::Object*  context)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Debug*>(),
                        {"LogWarning", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::UnityEngine::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, message, context);
}
inline void UnityEngine::Debug::LogWarningFormat(::StringW  format, /* [ParamArray] */ ::ArrayW<::System::Object*>  args)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Debug*>(),
                        {"LogWarningFormat", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::System::Object*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, format, args);
}
inline void UnityEngine::Debug::LogWarningFormat(::UnityEngine::Object*  context, ::StringW  format, /* [ParamArray] */ ::ArrayW<::System::Object*>  args)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Debug*>(),
                        {"LogWarningFormat", {}, {::i2c::type_of<::UnityEngine::Object*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::System::Object*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, context, format, args);
}
inline void UnityEngine::Debug::_cordl_Assert(bool  condition)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Debug*>(),
                        {"Assert", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, condition);
}
inline void UnityEngine::Debug::_cordl_Assert(bool  condition, ::StringW  message)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Debug*>(),
                        {"Assert", {}, {::i2c::type_of<bool>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, condition, message);
}
inline void UnityEngine::Debug::AssertFormat(bool  condition, ::StringW  format, /* [ParamArray] */ ::ArrayW<::System::Object*>  args)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Debug*>(),
                        {"AssertFormat", {}, {::i2c::type_of<bool>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::System::Object*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, condition, format, args);
}
inline void UnityEngine::Debug::LogAssertion(::System::Object*  message)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Debug*>(),
                        {"LogAssertion", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, message);
}
inline void UnityEngine::Debug::LogAssertionFormat(::StringW  format, /* [ParamArray] */ ::ArrayW<::System::Object*>  args)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Debug*>(),
                        {"LogAssertionFormat", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::System::Object*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, format, args);
}
inline bool UnityEngine::Debug::get_isDebugBuild()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Debug*>(),
                        {"get_isDebugBuild", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline bool UnityEngine::Debug::CallOverridenDebugHandler(::System::Exception*  exception, ::UnityEngine::Object*  obj)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Debug*>(),
                        {"CallOverridenDebugHandler", {}, {::i2c::type_of<::System::Exception*>(), ::i2c::type_of<::UnityEngine::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, exception, obj);
}
inline bool UnityEngine::Debug::IsLoggingEnabled()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Debug*>(),
                        {"IsLoggingEnabled", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline void UnityEngine::Debug::DrawLine_Injected(::by_ref<::UnityEngine::Vector3>  start, ::by_ref<::UnityEngine::Vector3>  end, /* [DefaultValue("Color.white")] */ ::by_ref<::UnityEngine::Color>  color, /* [DefaultValue("0.0f")] */ float_t  duration, /* [DefaultValue("true")] */ bool  depthTest)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Debug*>(),
                        {"DrawLine_Injected", {}, {::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Color>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, start, end, color, duration, depthTest);
}
inline int32_t UnityEngine::Debug::ExtractStackTraceNoAlloc_Injected(uint8_t*  buffer, int32_t  bufferMax, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  projectFolder)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Debug*>(),
                        {"ExtractStackTraceNoAlloc_Injected", {}, {::i2c::type_of<uint8_t*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, buffer, bufferMax, projectFolder);
}
// Ctor Parameters []
constexpr ::UnityEngine::Debug::Debug()   {
}
