#pragma once
// IWYU pragma private; include "Backtrace/Unity/Runtime/Native/Android/NativeClient.hpp"
#include "Backtrace/Unity/Runtime/Native/Android/zzzz__UnwindingMode_impl.hpp"
#include "Backtrace/Unity/Runtime/Native/Base/zzzz__NativeClientBase_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Backtrace/Unity/Runtime/Native/Android/zzzz__NativeClient_def.hpp"
#include "Backtrace/Unity/Model/Attributes/zzzz__IDynamicAttributeProvider_def.hpp"
#include "Backtrace/Unity/Model/Breadcrumbs/zzzz__BacktraceBreadcrumbs_def.hpp"
#include "Backtrace/Unity/Model/zzzz__BacktraceConfiguration_def.hpp"
#include "Backtrace/Unity/Runtime/Native/Android/zzzz__NativeClient_def.hpp"
#include "Backtrace/Unity/Runtime/Native/zzzz__INativeClient_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__IDictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "UnityEngine/zzzz__AndroidJavaObject_def.hpp"
//  Writing Method size for method: ::Backtrace::Unity::Runtime::Native::Android::NativeClient.Initialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::IntPtr, ::System::IntPtr, ::System::IntPtr, ::System::IntPtr, ::System::IntPtr, ::System::IntPtr, bool, int32_t)>(&::Backtrace::Unity::Runtime::Native::Android::NativeClient::Initialize)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x5f0c98c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Runtime::Native::Android::NativeClient*>(),
                        {"Initialize", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Runtime::Native::Android::NativeClient.InitializeJavaCrashHandler
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::IntPtr, ::System::IntPtr, ::System::IntPtr, ::System::IntPtr, ::System::IntPtr, ::System::IntPtr, ::System::IntPtr)>(&::Backtrace::Unity::Runtime::Native::Android::NativeClient::InitializeJavaCrashHandler)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x5f0ca60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Runtime::Native::Android::NativeClient*>(),
                        {"InitializeJavaCrashHandler", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Runtime::Native::Android::NativeClient.AddAttribute
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::IntPtr, ::System::IntPtr)>(&::Backtrace::Unity::Runtime::Native::Android::NativeClient::AddAttribute)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x5f0cb2c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Runtime::Native::Android::NativeClient*>(),
                        {"AddAttribute", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Runtime::Native::Android::NativeClient.NativeReport
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::IntPtr, bool)>(&::Backtrace::Unity::Runtime::Native::Android::NativeClient::NativeReport)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x5f0cbb4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Runtime::Native::Android::NativeClient*>(),
                        {"NativeReport", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Runtime::Native::Android::NativeClient.DisableNativeIntegration
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::Backtrace::Unity::Runtime::Native::Android::NativeClient::DisableNativeIntegration)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5f0cc3c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Runtime::Native::Android::NativeClient*>(),
                        {"DisableNativeIntegration", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Runtime::Native::Android::NativeClient.SetDefaultAttributeMaps
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Backtrace::Unity::Runtime::Native::Android::NativeClient::*)()>(&::Backtrace::Unity::Runtime::Native::Android::NativeClient::SetDefaultAttributeMaps)> {
  constexpr static std::size_t size = 0x880;
  constexpr static std::size_t addrs = 0x5f0cca8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Runtime::Native::Android::NativeClient*>(),
                        {"SetDefaultAttributeMaps", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Runtime::Native::Android::NativeClient.get_GameObjectName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Backtrace::Unity::Runtime::Native::Android::NativeClient::*)()>(&::Backtrace::Unity::Runtime::Native::Android::NativeClient::get_GameObjectName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f0d528;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Runtime::Native::Android::NativeClient*>(),
                        {"get_GameObjectName", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Runtime::Native::Android::NativeClient.set_GameObjectName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Backtrace::Unity::Runtime::Native::Android::NativeClient::*)(::StringW)>(&::Backtrace::Unity::Runtime::Native::Android::NativeClient::set_GameObjectName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f0d530;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Runtime::Native::Android::NativeClient*>(),
                        {"set_GameObjectName", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Runtime::Native::Android::NativeClient._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Backtrace::Unity::Runtime::Native::Android::NativeClient::*)(::Backtrace::Unity::Model::BacktraceConfiguration*, ::Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbs*, ::System::Collections::Generic::IDictionary_2<::StringW,::StringW>*, ::System::Collections::Generic::IEnumerable_1<::StringW>*, ::StringW)>(&::Backtrace::Unity::Runtime::Native::Android::NativeClient::_ctor)> {
  constexpr static std::size_t size = 0x264;
  constexpr static std::size_t addrs = 0x5f0c45c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Runtime::Native::Android::NativeClient*>(),
                        {".ctor", {}, {::i2c::type_of<::Backtrace::Unity::Model::BacktraceConfiguration*>(), ::i2c::type_of<::Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbs*>(), ::i2c::type_of<::System::Collections::Generic::IDictionary_2<::StringW,::StringW>*>(), ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::StringW>*>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Runtime::Native::Android::NativeClient.HandleUnhandledExceptions
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Backtrace::Unity::Runtime::Native::Android::NativeClient::*)()>(&::Backtrace::Unity::Runtime::Native::Android::NativeClient::HandleUnhandledExceptions)> {
  constexpr static std::size_t size = 0x224;
  constexpr static std::size_t addrs = 0x5f0dec4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Runtime::Native::Android::NativeClient*>(),
                        {"HandleUnhandledExceptions", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Runtime::Native::Android::NativeClient.GetNativeDirectoryPath
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Backtrace::Unity::Runtime::Native::Android::NativeClient::*)()>(&::Backtrace::Unity::Runtime::Native::Android::NativeClient::GetNativeDirectoryPath)> {
  constexpr static std::size_t size = 0x5a8;
  constexpr static std::size_t addrs = 0x5f0e0e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Runtime::Native::Android::NativeClient*>(),
                        {"GetNativeDirectoryPath", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Runtime::Native::Android::NativeClient.GuessNativeDirectoryPath
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Backtrace::Unity::Runtime::Native::Android::NativeClient::*)()>(&::Backtrace::Unity::Runtime::Native::Android::NativeClient::GuessNativeDirectoryPath)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x5f0e690;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Runtime::Native::Android::NativeClient*>(),
                        {"GuessNativeDirectoryPath", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Runtime::Native::Android::NativeClient.HandleNativeCrashes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Backtrace::Unity::Runtime::Native::Android::NativeClient::*)(::System::Collections::Generic::IDictionary_2<::StringW,::StringW>*, ::System::Collections::Generic::IEnumerable_1<::StringW>*)>(&::Backtrace::Unity::Runtime::Native::Android::NativeClient::HandleNativeCrashes)> {
  constexpr static std::size_t size = 0x5dc;
  constexpr static std::size_t addrs = 0x5f0d538;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Runtime::Native::Android::NativeClient*>(),
                        {"HandleNativeCrashes", {}, {::i2c::type_of<::System::Collections::Generic::IDictionary_2<::StringW,::StringW>*>(), ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::StringW>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Runtime::Native::Android::NativeClient.CanInitializeExecutableCrashHandler
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Backtrace::Unity::Runtime::Native::Android::NativeClient::*)(::StringW, ::StringW)>(&::Backtrace::Unity::Runtime::Native::Android::NativeClient::CanInitializeExecutableCrashHandler)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x5f0e838;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Runtime::Native::Android::NativeClient*>(),
                        {"CanInitializeExecutableCrashHandler", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Runtime::Native::Android::NativeClient.InitializeExecutableCrashHandler
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Backtrace::Unity::Runtime::Native::Android::NativeClient::*)(::StringW, ::StringW, ::StringW, ::System::Collections::Generic::IEnumerable_1<::StringW>*)>(&::Backtrace::Unity::Runtime::Native::Android::NativeClient::InitializeExecutableCrashHandler)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x5f0f21c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Runtime::Native::Android::NativeClient*>(),
                        {"InitializeExecutableCrashHandler", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::StringW>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Runtime::Native::Android::NativeClient.InitializeJavaCrashHandler
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Backtrace::Unity::Runtime::Native::Android::NativeClient::*)(::StringW, ::StringW, ::StringW, ::StringW, ::System::Collections::Generic::IEnumerable_1<::StringW>*)>(&::Backtrace::Unity::Runtime::Native::Android::NativeClient::InitializeJavaCrashHandler)> {
  constexpr static std::size_t size = 0x9b0;
  constexpr static std::size_t addrs = 0x5f0e86c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Runtime::Native::Android::NativeClient*>(),
                        {"InitializeJavaCrashHandler", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::StringW>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Runtime::Native::Android::NativeClient.GetLibrarySystemPath
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Backtrace::Unity::Runtime::Native::Android::NativeClient::*)()>(&::Backtrace::Unity::Runtime::Native::Android::NativeClient::GetLibrarySystemPath)> {
  constexpr static std::size_t size = 0x224;
  constexpr static std::size_t addrs = 0x5f0f344;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Runtime::Native::Android::NativeClient*>(),
                        {"GetLibrarySystemPath", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Runtime::Native::Android::NativeClient.GetAttributes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Backtrace::Unity::Runtime::Native::Android::NativeClient::*)(::System::Collections::Generic::IDictionary_2<::StringW,::StringW>*)>(&::Backtrace::Unity::Runtime::Native::Android::NativeClient::GetAttributes)> {
  constexpr static std::size_t size = 0x35c;
  constexpr static std::size_t addrs = 0x5f0f568;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Runtime::Native::Android::NativeClient*>(),
                        {"GetAttributes", {}, {::i2c::type_of<::System::Collections::Generic::IDictionary_2<::StringW,::StringW>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Runtime::Native::Android::NativeClient.FinishUnhandledBackgroundException
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Backtrace::Unity::Runtime::Native::Android::NativeClient::*)()>(&::Backtrace::Unity::Runtime::Native::Android::NativeClient::FinishUnhandledBackgroundException)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x5f0105c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Runtime::Native::Android::NativeClient*>(),
                        {"FinishUnhandledBackgroundException", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Runtime::Native::Android::NativeClient.HandleAnr
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Backtrace::Unity::Runtime::Native::Android::NativeClient::*)()>(&::Backtrace::Unity::Runtime::Native::Android::NativeClient::HandleAnr)> {
  constexpr static std::size_t size = 0x3b0;
  constexpr static std::size_t addrs = 0x5f0db14;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Runtime::Native::Android::NativeClient*>(),
                        {"HandleAnr", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Runtime::Native::Android::NativeClient.SetAttribute
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Backtrace::Unity::Runtime::Native::Android::NativeClient::*)(::StringW, ::StringW)>(&::Backtrace::Unity::Runtime::Native::Android::NativeClient::SetAttribute)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x5f0f8cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Runtime::Native::Android::NativeClient*>(),
                        {"SetAttribute", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Runtime::Native::Android::NativeClient.OnOOM
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Backtrace::Unity::Runtime::Native::Android::NativeClient::*)()>(&::Backtrace::Unity::Runtime::Native::Android::NativeClient::OnOOM)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x5f0f948;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Runtime::Native::Android::NativeClient*>(),
                        {"OnOOM", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Runtime::Native::Android::NativeClient.Disable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Backtrace::Unity::Runtime::Native::Android::NativeClient::*)()>(&::Backtrace::Unity::Runtime::Native::Android::NativeClient::Disable)> {
  constexpr static std::size_t size = 0x1b4;
  constexpr static std::size_t addrs = 0x5f0fa34;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Backtrace::Unity::Runtime::Native::Android::NativeClient*>(),
                    {::i2c::class_of<::Backtrace::Unity::Runtime::Native::Android::NativeClient*>(), 6}
                ));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*& Backtrace::Unity::Runtime::Native::Android::NativeClient::__cordl_internal_get__attributeMapping()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____attributeMapping;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>* const& Backtrace::Unity::Runtime::Native::Android::NativeClient::__cordl_internal_get__attributeMapping() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____attributeMapping;
}
constexpr void Backtrace::Unity::Runtime::Native::Android::NativeClient::__cordl_internal_set__attributeMapping(::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____attributeMapping = value;
}
constexpr ::Backtrace::Unity::Runtime::Native::Android::UnwindingMode& Backtrace::Unity::Runtime::Native::Android::NativeClient::__cordl_internal_get_UnwindingMode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___UnwindingMode;
}
constexpr ::Backtrace::Unity::Runtime::Native::Android::UnwindingMode const& Backtrace::Unity::Runtime::Native::Android::NativeClient::__cordl_internal_get_UnwindingMode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___UnwindingMode;
}
constexpr void Backtrace::Unity::Runtime::Native::Android::NativeClient::__cordl_internal_set_UnwindingMode(::Backtrace::Unity::Runtime::Native::Android::UnwindingMode  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___UnwindingMode = value;
}
constexpr ::StringW& Backtrace::Unity::Runtime::Native::Android::NativeClient::__cordl_internal_get__anrPath()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____anrPath;
}
constexpr ::StringW const& Backtrace::Unity::Runtime::Native::Android::NativeClient::__cordl_internal_get__anrPath() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____anrPath;
}
constexpr void Backtrace::Unity::Runtime::Native::Android::NativeClient::__cordl_internal_set__anrPath(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____anrPath = value;
}
constexpr ::StringW& Backtrace::Unity::Runtime::Native::Android::NativeClient::__cordl_internal_get__unhandledExceptionPath()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____unhandledExceptionPath;
}
constexpr ::StringW const& Backtrace::Unity::Runtime::Native::Android::NativeClient::__cordl_internal_get__unhandledExceptionPath() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____unhandledExceptionPath;
}
constexpr void Backtrace::Unity::Runtime::Native::Android::NativeClient::__cordl_internal_set__unhandledExceptionPath(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____unhandledExceptionPath = value;
}
constexpr ::StringW& Backtrace::Unity::Runtime::Native::Android::NativeClient::__cordl_internal_get__crashHandlerPath()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____crashHandlerPath;
}
constexpr ::StringW const& Backtrace::Unity::Runtime::Native::Android::NativeClient::__cordl_internal_get__crashHandlerPath() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____crashHandlerPath;
}
constexpr void Backtrace::Unity::Runtime::Native::Android::NativeClient::__cordl_internal_set__crashHandlerPath(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____crashHandlerPath = value;
}
constexpr ::StringW& Backtrace::Unity::Runtime::Native::Android::NativeClient::__cordl_internal_get__nativeLibraryName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____nativeLibraryName;
}
constexpr ::StringW const& Backtrace::Unity::Runtime::Native::Android::NativeClient::__cordl_internal_get__nativeLibraryName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____nativeLibraryName;
}
constexpr void Backtrace::Unity::Runtime::Native::Android::NativeClient::__cordl_internal_set__nativeLibraryName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____nativeLibraryName = value;
}
constexpr bool& Backtrace::Unity::Runtime::Native::Android::NativeClient::__cordl_internal_get__enabled()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____enabled;
}
constexpr bool const& Backtrace::Unity::Runtime::Native::Android::NativeClient::__cordl_internal_get__enabled() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____enabled;
}
constexpr void Backtrace::Unity::Runtime::Native::Android::NativeClient::__cordl_internal_set__enabled(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____enabled = value;
}
constexpr ::UnityEngine::AndroidJavaObject*& Backtrace::Unity::Runtime::Native::Android::NativeClient::__cordl_internal_get__anrWatcher()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____anrWatcher;
}
constexpr ::UnityEngine::AndroidJavaObject* const& Backtrace::Unity::Runtime::Native::Android::NativeClient::__cordl_internal_get__anrWatcher() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____anrWatcher;
}
constexpr void Backtrace::Unity::Runtime::Native::Android::NativeClient::__cordl_internal_set__anrWatcher(::UnityEngine::AndroidJavaObject*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____anrWatcher = value;
}
constexpr ::UnityEngine::AndroidJavaObject*& Backtrace::Unity::Runtime::Native::Android::NativeClient::__cordl_internal_get__unhandledExceptionWatcher()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____unhandledExceptionWatcher;
}
constexpr ::UnityEngine::AndroidJavaObject* const& Backtrace::Unity::Runtime::Native::Android::NativeClient::__cordl_internal_get__unhandledExceptionWatcher() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____unhandledExceptionWatcher;
}
constexpr void Backtrace::Unity::Runtime::Native::Android::NativeClient::__cordl_internal_set__unhandledExceptionWatcher(::UnityEngine::AndroidJavaObject*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____unhandledExceptionWatcher = value;
}
constexpr bool& Backtrace::Unity::Runtime::Native::Android::NativeClient::__cordl_internal_get__enableClientSideUnwinding()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____enableClientSideUnwinding;
}
constexpr bool const& Backtrace::Unity::Runtime::Native::Android::NativeClient::__cordl_internal_get__enableClientSideUnwinding() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____enableClientSideUnwinding;
}
constexpr void Backtrace::Unity::Runtime::Native::Android::NativeClient::__cordl_internal_set__enableClientSideUnwinding(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____enableClientSideUnwinding = value;
}
constexpr ::StringW& Backtrace::Unity::Runtime::Native::Android::NativeClient::__cordl_internal_get__GameObjectName_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____GameObjectName_k__BackingField;
}
constexpr ::StringW const& Backtrace::Unity::Runtime::Native::Android::NativeClient::__cordl_internal_get__GameObjectName_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____GameObjectName_k__BackingField;
}
constexpr void Backtrace::Unity::Runtime::Native::Android::NativeClient::__cordl_internal_set__GameObjectName_k__BackingField(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____GameObjectName_k__BackingField = value;
}
inline bool Backtrace::Unity::Runtime::Native::Android::NativeClient::Initialize(::System::IntPtr  submissionUrl, ::System::IntPtr  databasePath, ::System::IntPtr  handlerPath, ::System::IntPtr  keys, ::System::IntPtr  values, ::System::IntPtr  attachments, bool  enableClientSideUnwinding, int32_t  unwindingMode)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Runtime::Native::Android::NativeClient*>(),
                        {"Initialize", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, submissionUrl, databasePath, handlerPath, keys, values, attachments, enableClientSideUnwinding, unwindingMode);
}
inline bool Backtrace::Unity::Runtime::Native::Android::NativeClient::InitializeJavaCrashHandler(::System::IntPtr  submissionUrl, ::System::IntPtr  databasePath, ::System::IntPtr  classPath, ::System::IntPtr  keys, ::System::IntPtr  values, ::System::IntPtr  attachments, ::System::IntPtr  environmentVariables)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Runtime::Native::Android::NativeClient*>(),
                        {"InitializeJavaCrashHandler", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, submissionUrl, databasePath, classPath, keys, values, attachments, environmentVariables);
}
inline bool Backtrace::Unity::Runtime::Native::Android::NativeClient::AddAttribute(::System::IntPtr  key, ::System::IntPtr  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Runtime::Native::Android::NativeClient*>(),
                        {"AddAttribute", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, key, value);
}
inline bool Backtrace::Unity::Runtime::Native::Android::NativeClient::NativeReport(::System::IntPtr  message, bool  setMainThreadAsFaultingThread)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Runtime::Native::Android::NativeClient*>(),
                        {"NativeReport", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, message, setMainThreadAsFaultingThread);
}
inline bool Backtrace::Unity::Runtime::Native::Android::NativeClient::DisableNativeIntegration()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Runtime::Native::Android::NativeClient*>(),
                        {"DisableNativeIntegration", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline void Backtrace::Unity::Runtime::Native::Android::NativeClient::SetDefaultAttributeMaps()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Runtime::Native::Android::NativeClient*>(),
                        {"SetDefaultAttributeMaps", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::StringW Backtrace::Unity::Runtime::Native::Android::NativeClient::get_GameObjectName()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Runtime::Native::Android::NativeClient*>(),
                        {"get_GameObjectName", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void Backtrace::Unity::Runtime::Native::Android::NativeClient::set_GameObjectName(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Runtime::Native::Android::NativeClient*>(),
                        {"set_GameObjectName", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Backtrace::Unity::Runtime::Native::Android::NativeClient::_ctor(::Backtrace::Unity::Model::BacktraceConfiguration*  configuration, ::Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbs*  breadcrumbs, ::System::Collections::Generic::IDictionary_2<::StringW,::StringW>*  clientAttributes, ::System::Collections::Generic::IEnumerable_1<::StringW>*  attachments, ::StringW  gameObjectName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Runtime::Native::Android::NativeClient*>(),
                        {".ctor", {}, {::i2c::type_of<::Backtrace::Unity::Model::BacktraceConfiguration*>(), ::i2c::type_of<::Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbs*>(), ::i2c::type_of<::System::Collections::Generic::IDictionary_2<::StringW,::StringW>*>(), ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::StringW>*>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, configuration, breadcrumbs, clientAttributes, attachments, gameObjectName);
}
inline void Backtrace::Unity::Runtime::Native::Android::NativeClient::HandleUnhandledExceptions()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Runtime::Native::Android::NativeClient*>(),
                        {"HandleUnhandledExceptions", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::StringW Backtrace::Unity::Runtime::Native::Android::NativeClient::GetNativeDirectoryPath()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Runtime::Native::Android::NativeClient*>(),
                        {"GetNativeDirectoryPath", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW Backtrace::Unity::Runtime::Native::Android::NativeClient::GuessNativeDirectoryPath()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Runtime::Native::Android::NativeClient*>(),
                        {"GuessNativeDirectoryPath", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void Backtrace::Unity::Runtime::Native::Android::NativeClient::HandleNativeCrashes(::System::Collections::Generic::IDictionary_2<::StringW,::StringW>*  backtraceAttributes, ::System::Collections::Generic::IEnumerable_1<::StringW>*  attachments)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Runtime::Native::Android::NativeClient*>(),
                        {"HandleNativeCrashes", {}, {::i2c::type_of<::System::Collections::Generic::IDictionary_2<::StringW,::StringW>*>(), ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::StringW>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, backtraceAttributes, attachments);
}
inline bool Backtrace::Unity::Runtime::Native::Android::NativeClient::CanInitializeExecutableCrashHandler(::StringW  nativeLibraryDirectory, ::StringW  handlerPath)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Runtime::Native::Android::NativeClient*>(),
                        {"CanInitializeExecutableCrashHandler", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, nativeLibraryDirectory, handlerPath);
}
inline bool Backtrace::Unity::Runtime::Native::Android::NativeClient::InitializeExecutableCrashHandler(::StringW  minidumpUrl, ::StringW  databasePath, ::StringW  crashpadHandlerPath, ::System::Collections::Generic::IEnumerable_1<::StringW>*  attachments)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Runtime::Native::Android::NativeClient*>(),
                        {"InitializeExecutableCrashHandler", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::StringW>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, minidumpUrl, databasePath, crashpadHandlerPath, attachments);
}
inline bool Backtrace::Unity::Runtime::Native::Android::NativeClient::InitializeJavaCrashHandler(::StringW  minidumpUrl, ::StringW  databasePath, ::StringW  deviceAbi, ::StringW  nativeDirectory, ::System::Collections::Generic::IEnumerable_1<::StringW>*  attachments)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Runtime::Native::Android::NativeClient*>(),
                        {"InitializeJavaCrashHandler", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::StringW>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, minidumpUrl, databasePath, deviceAbi, nativeDirectory, attachments);
}
inline ::StringW Backtrace::Unity::Runtime::Native::Android::NativeClient::GetLibrarySystemPath()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Runtime::Native::Android::NativeClient*>(),
                        {"GetLibrarySystemPath", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void Backtrace::Unity::Runtime::Native::Android::NativeClient::GetAttributes(::System::Collections::Generic::IDictionary_2<::StringW,::StringW>*  result)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Runtime::Native::Android::NativeClient*>(),
                        {"GetAttributes", {}, {::i2c::type_of<::System::Collections::Generic::IDictionary_2<::StringW,::StringW>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result);
}
inline void Backtrace::Unity::Runtime::Native::Android::NativeClient::FinishUnhandledBackgroundException()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Runtime::Native::Android::NativeClient*>(),
                        {"FinishUnhandledBackgroundException", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Backtrace::Unity::Runtime::Native::Android::NativeClient::HandleAnr()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Runtime::Native::Android::NativeClient*>(),
                        {"HandleAnr", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Backtrace::Unity::Runtime::Native::Android::NativeClient::SetAttribute(::StringW  key, ::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Runtime::Native::Android::NativeClient*>(),
                        {"SetAttribute", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, key, value);
}
inline bool Backtrace::Unity::Runtime::Native::Android::NativeClient::OnOOM()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Runtime::Native::Android::NativeClient*>(),
                        {"OnOOM", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Backtrace::Unity::Runtime::Native::Android::NativeClient::Disable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Backtrace::Unity::Runtime::Native::Android::NativeClient*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Backtrace::Unity::Runtime::Native::Android::NativeClient* Backtrace::Unity::Runtime::Native::Android::NativeClient::New_ctor(::Backtrace::Unity::Model::BacktraceConfiguration*  configuration, ::Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbs*  breadcrumbs, ::System::Collections::Generic::IDictionary_2<::StringW,::StringW>*  clientAttributes, ::System::Collections::Generic::IEnumerable_1<::StringW>*  attachments, ::StringW  gameObjectName)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Backtrace::Unity::Runtime::Native::Android::NativeClient*>(configuration, breadcrumbs, clientAttributes, attachments, gameObjectName));
}
/// @brief Convert operator to "::Backtrace::Unity::Runtime::Native::INativeClient"
constexpr  Backtrace::Unity::Runtime::Native::Android::NativeClient::operator ::Backtrace::Unity::Runtime::Native::INativeClient*() noexcept {
return static_cast<::Backtrace::Unity::Runtime::Native::INativeClient*>(static_cast<void*>(this));
}
/// @brief Convert to "::Backtrace::Unity::Runtime::Native::INativeClient"
constexpr ::Backtrace::Unity::Runtime::Native::INativeClient* Backtrace::Unity::Runtime::Native::Android::NativeClient::i___Backtrace__Unity__Runtime__Native__INativeClient() noexcept {
return static_cast<::Backtrace::Unity::Runtime::Native::INativeClient*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Backtrace::Unity::Model::Attributes::IDynamicAttributeProvider"
constexpr  Backtrace::Unity::Runtime::Native::Android::NativeClient::operator ::Backtrace::Unity::Model::Attributes::IDynamicAttributeProvider*() noexcept {
return static_cast<::Backtrace::Unity::Model::Attributes::IDynamicAttributeProvider*>(static_cast<void*>(this));
}
/// @brief Convert to "::Backtrace::Unity::Model::Attributes::IDynamicAttributeProvider"
constexpr ::Backtrace::Unity::Model::Attributes::IDynamicAttributeProvider* Backtrace::Unity::Runtime::Native::Android::NativeClient::i___Backtrace__Unity__Model__Attributes__IDynamicAttributeProvider() noexcept {
return static_cast<::Backtrace::Unity::Model::Attributes::IDynamicAttributeProvider*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Backtrace::Unity::Runtime::Native::Android::NativeClient::NativeClient()   {
}
//  Writing Method size for method: ::Backtrace::Unity::Runtime::Native::Android::NativeClient___c__DisplayClass34_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Backtrace::Unity::Runtime::Native::Android::NativeClient___c__DisplayClass34_0::*)()>(&::Backtrace::Unity::Runtime::Native::Android::NativeClient___c__DisplayClass34_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f0f8c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Runtime::Native::Android::NativeClient___c__DisplayClass34_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Runtime::Native::Android::NativeClient___c__DisplayClass34_0._HandleAnr_b__0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Backtrace::Unity::Runtime::Native::Android::NativeClient___c__DisplayClass34_0::*)()>(&::Backtrace::Unity::Runtime::Native::Android::NativeClient___c__DisplayClass34_0::_HandleAnr_b__0)> {
  constexpr static std::size_t size = 0x1f4;
  constexpr static std::size_t addrs = 0x5f0fbe8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Runtime::Native::Android::NativeClient___c__DisplayClass34_0*>(),
                        {"<HandleAnr>b__0", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Backtrace::Unity::Runtime::Native::Android::NativeClient*& Backtrace::Unity::Runtime::Native::Android::NativeClient___c__DisplayClass34_0::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::Backtrace::Unity::Runtime::Native::Android::NativeClient* const& Backtrace::Unity::Runtime::Native::Android::NativeClient___c__DisplayClass34_0::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void Backtrace::Unity::Runtime::Native::Android::NativeClient___c__DisplayClass34_0::__cordl_internal_set___4__this(::Backtrace::Unity::Runtime::Native::Android::NativeClient*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
constexpr bool& Backtrace::Unity::Runtime::Native::Android::NativeClient___c__DisplayClass34_0::__cordl_internal_get_reported()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___reported;
}
constexpr bool const& Backtrace::Unity::Runtime::Native::Android::NativeClient___c__DisplayClass34_0::__cordl_internal_get_reported() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___reported;
}
constexpr void Backtrace::Unity::Runtime::Native::Android::NativeClient___c__DisplayClass34_0::__cordl_internal_set_reported(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___reported = value;
}
inline void Backtrace::Unity::Runtime::Native::Android::NativeClient___c__DisplayClass34_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Runtime::Native::Android::NativeClient___c__DisplayClass34_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Backtrace::Unity::Runtime::Native::Android::NativeClient___c__DisplayClass34_0::_HandleAnr_b__0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Runtime::Native::Android::NativeClient___c__DisplayClass34_0*>(),
                        {"<HandleAnr>b__0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Backtrace::Unity::Runtime::Native::Android::NativeClient___c__DisplayClass34_0* Backtrace::Unity::Runtime::Native::Android::NativeClient___c__DisplayClass34_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Backtrace::Unity::Runtime::Native::Android::NativeClient___c__DisplayClass34_0*>());
}
// Ctor Parameters []
constexpr ::Backtrace::Unity::Runtime::Native::Android::NativeClient___c__DisplayClass34_0::NativeClient___c__DisplayClass34_0()   {
}
