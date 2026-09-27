#pragma once
// IWYU pragma private; include "Unity/Burst/BurstCompiler.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Burst/zzzz__BurstCompiler_def.hpp"
#include "System/Reflection/zzzz__MethodInfo_def.hpp"
#include "System/zzzz__Attribute_def.hpp"
#include "System/zzzz__Delegate_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Unity/Burst/zzzz__BurstCompilerOptions_def.hpp"
#include "Unity/Burst/zzzz__BurstCompiler_def.hpp"
#include "Unity/Burst/zzzz__FunctionPointer_1_def.hpp"
//  Writing Method size for method: ::Unity::Burst::BurstCompiler.get_IsEnabled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::Unity::Burst::BurstCompiler::get_IsEnabled)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0xae7fc54;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Burst::BurstCompiler*>(),
                        {"get_IsEnabled", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Burst::BurstCompiler.Compile
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void* (*)(::System::Object*, bool, bool)>(&::Unity::Burst::BurstCompiler::Compile)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0xae7fcf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Burst::BurstCompiler*>(),
                        {"Compile", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Burst::BurstCompiler.Compile
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void* (*)(::System::Object*, ::System::Reflection::MethodInfo*, bool, bool, bool)>(&::Unity::Burst::BurstCompiler::Compile)> {
  constexpr static std::size_t size = 0x53c;
  constexpr static std::size_t addrs = 0xae7fe0c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Burst::BurstCompiler*>(),
                        {"Compile", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Reflection::MethodInfo*>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Burst::BurstCompiler.DummyMethod
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::Unity::Burst::BurstCompiler::DummyMethod)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xae80408;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Burst::BurstCompiler*>(),
                        {"DummyMethod", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Unity::Burst::BurstCompiler::setStaticF__IsEnabled(bool  value)  {
::cordl_internals::setStaticField<bool, "_IsEnabled", ::Unity::Burst::BurstCompiler*>(std::forward<bool>(value));
}
inline bool Unity::Burst::BurstCompiler::getStaticF__IsEnabled()  {
return ::cordl_internals::getStaticField<bool, "_IsEnabled", ::Unity::Burst::BurstCompiler*>();
}
inline void Unity::Burst::BurstCompiler::setStaticF_Options(::Unity::Burst::BurstCompilerOptions*  value)  {
::cordl_internals::setStaticField<::Unity::Burst::BurstCompilerOptions*, "Options", ::Unity::Burst::BurstCompiler*>(std::forward<::Unity::Burst::BurstCompilerOptions*>(value));
}
inline ::Unity::Burst::BurstCompilerOptions* Unity::Burst::BurstCompiler::getStaticF_Options()  {
return ::cordl_internals::getStaticField<::Unity::Burst::BurstCompilerOptions*, "Options", ::Unity::Burst::BurstCompiler*>();
}
inline void Unity::Burst::BurstCompiler::setStaticF_DummyMethodInfo(::System::Reflection::MethodInfo*  value)  {
::cordl_internals::setStaticField<::System::Reflection::MethodInfo*, "DummyMethodInfo", ::Unity::Burst::BurstCompiler*>(std::forward<::System::Reflection::MethodInfo*>(value));
}
inline ::System::Reflection::MethodInfo* Unity::Burst::BurstCompiler::getStaticF_DummyMethodInfo()  {
return ::cordl_internals::getStaticField<::System::Reflection::MethodInfo*, "DummyMethodInfo", ::Unity::Burst::BurstCompiler*>();
}
inline bool Unity::Burst::BurstCompiler::get_IsEnabled()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Burst::BurstCompiler*>(),
                        {"get_IsEnabled", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
template<typename T>
requires(::cordl_internals::reference_type_constraint<T>)
inline ::Unity::Burst::FunctionPointer_1<T> Unity::Burst::BurstCompiler::CompileFunctionPointer(T  delegateMethod)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Unity::Burst::BurstCompiler*>(),
                    {"CompileFunctionPointer", {::i2c::class_of<T>()}, {::i2c::type_of<T>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Unity::Burst::FunctionPointer_1<T>>(nullptr, ___internal_method, delegateMethod);
}
inline void* Unity::Burst::BurstCompiler::Compile(::System::Object*  delegateObj, bool  isFunctionPointer, bool  deterministicCompilation)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Burst::BurstCompiler*>(),
                        {"Compile", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void*>(nullptr, ___internal_method, delegateObj, isFunctionPointer, deterministicCompilation);
}
inline void* Unity::Burst::BurstCompiler::Compile(::System::Object*  delegateObj, ::System::Reflection::MethodInfo*  methodInfo, bool  isFunctionPointer, bool  isILPostProcessing, bool  deterministicCompilation)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Burst::BurstCompiler*>(),
                        {"Compile", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Reflection::MethodInfo*>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void*>(nullptr, ___internal_method, delegateObj, methodInfo, isFunctionPointer, isILPostProcessing, deterministicCompilation);
}
inline void Unity::Burst::BurstCompiler::DummyMethod()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Burst::BurstCompiler*>(),
                        {"DummyMethod", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::Unity::Burst::BurstCompiler::BurstCompiler()   {
}
//  Writing Method size for method: ::Unity::Burst::BurstCompiler___c._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Burst::BurstCompiler___c::*)()>(&::Unity::Burst::BurstCompiler___c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xae80a88;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Burst::BurstCompiler___c*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Burst::BurstCompiler___c._Compile_b__22_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::Burst::BurstCompiler___c::*)(::System::Attribute*)>(&::Unity::Burst::BurstCompiler___c::_Compile_b__22_0)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0xae80a90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Burst::BurstCompiler___c*>(),
                        {"<Compile>b__22_0", {}, {::i2c::type_of<::System::Attribute*>()}}
                    )));
    return ___internal_method;
  }
};
inline void Unity::Burst::BurstCompiler___c::setStaticF___9(::Unity::Burst::BurstCompiler___c*  value)  {
::cordl_internals::setStaticField<::Unity::Burst::BurstCompiler___c*, "<>9", ::Unity::Burst::BurstCompiler___c*>(std::forward<::Unity::Burst::BurstCompiler___c*>(value));
}
inline ::Unity::Burst::BurstCompiler___c* Unity::Burst::BurstCompiler___c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::Unity::Burst::BurstCompiler___c*, "<>9", ::Unity::Burst::BurstCompiler___c*>();
}
inline void Unity::Burst::BurstCompiler___c::setStaticF___9__22_0(::System::Func_2<::System::Attribute*,bool>*  value)  {
::cordl_internals::setStaticField<::System::Func_2<::System::Attribute*,bool>*, "<>9__22_0", ::Unity::Burst::BurstCompiler___c*>(std::forward<::System::Func_2<::System::Attribute*,bool>*>(value));
}
inline ::System::Func_2<::System::Attribute*,bool>* Unity::Burst::BurstCompiler___c::getStaticF___9__22_0()  {
return ::cordl_internals::getStaticField<::System::Func_2<::System::Attribute*,bool>*, "<>9__22_0", ::Unity::Burst::BurstCompiler___c*>();
}
inline void Unity::Burst::BurstCompiler___c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Burst::BurstCompiler___c*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Unity::Burst::BurstCompiler___c::_Compile_b__22_0(::System::Attribute*  s)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Burst::BurstCompiler___c*>(),
                        {"<Compile>b__22_0", {}, {::i2c::type_of<::System::Attribute*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, s);
}
inline ::Unity::Burst::BurstCompiler___c* Unity::Burst::BurstCompiler___c::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Unity::Burst::BurstCompiler___c*>());
}
// Ctor Parameters []
constexpr ::Unity::Burst::BurstCompiler___c::BurstCompiler___c()   {
}
//  Writing Method size for method: ::Unity::Burst::BurstCompiler_FakeDelegate.get_Method
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Reflection::MethodInfo* (::Unity::Burst::BurstCompiler_FakeDelegate::*)()>(&::Unity::Burst::BurstCompiler_FakeDelegate::get_Method)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xae80a18;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Burst::BurstCompiler_FakeDelegate*>(),
                        {"get_Method", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Reflection::MethodInfo*& Unity::Burst::BurstCompiler_FakeDelegate::__cordl_internal_get__Method_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Method_k__BackingField;
}
constexpr ::System::Reflection::MethodInfo* const& Unity::Burst::BurstCompiler_FakeDelegate::__cordl_internal_get__Method_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Method_k__BackingField;
}
constexpr void Unity::Burst::BurstCompiler_FakeDelegate::__cordl_internal_set__Method_k__BackingField(::System::Reflection::MethodInfo*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Method_k__BackingField = value;
}
inline ::System::Reflection::MethodInfo* Unity::Burst::BurstCompiler_FakeDelegate::get_Method()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Burst::BurstCompiler_FakeDelegate*>(),
                        {"get_Method", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Reflection::MethodInfo*>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Unity::Burst::BurstCompiler_FakeDelegate::BurstCompiler_FakeDelegate()   {
}
//  Writing Method size for method: ::Unity::Burst::BurstCompiler_BurstCompilerHelper.IsBurstEnabled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::Unity::Burst::BurstCompiler_BurstCompilerHelper::IsBurstEnabled)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xae8056c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Burst::BurstCompiler_BurstCompilerHelper*>(),
                        {"IsBurstEnabled", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Burst::BurstCompiler_BurstCompilerHelper.DiscardedMethod
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<bool>)>(&::Unity::Burst::BurstCompiler_BurstCompilerHelper::DiscardedMethod)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xae8063c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Burst::BurstCompiler_BurstCompilerHelper*>(),
                        {"DiscardedMethod", {}, {::i2c::type_of<::by_ref<bool>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Burst::BurstCompiler_BurstCompilerHelper.IsCompiledByBurst
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Delegate*)>(&::Unity::Burst::BurstCompiler_BurstCompilerHelper::IsCompiledByBurst)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xae80644;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Burst::BurstCompiler_BurstCompilerHelper*>(),
                        {"IsCompiledByBurst", {}, {::i2c::type_of<::System::Delegate*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Burst::BurstCompiler_BurstCompilerHelper.IsBurstEnabled$BurstManaged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::Unity::Burst::BurstCompiler_BurstCompilerHelper::IsBurstEnabled$BurstManaged)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0xae807fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Burst::BurstCompiler_BurstCompilerHelper*>(),
                        {"IsBurstEnabled$BurstManaged", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Unity::Burst::BurstCompiler_BurstCompilerHelper::setStaticF_IsBurstEnabledImpl(::Unity::Burst::BurstCompilerHelper_BurstCompiler_IsBurstEnabledDelegate*  value)  {
::cordl_internals::setStaticField<::Unity::Burst::BurstCompilerHelper_BurstCompiler_IsBurstEnabledDelegate*, "IsBurstEnabledImpl", ::Unity::Burst::BurstCompiler_BurstCompilerHelper*>(std::forward<::Unity::Burst::BurstCompilerHelper_BurstCompiler_IsBurstEnabledDelegate*>(value));
}
inline ::Unity::Burst::BurstCompilerHelper_BurstCompiler_IsBurstEnabledDelegate* Unity::Burst::BurstCompiler_BurstCompilerHelper::getStaticF_IsBurstEnabledImpl()  {
return ::cordl_internals::getStaticField<::Unity::Burst::BurstCompilerHelper_BurstCompiler_IsBurstEnabledDelegate*, "IsBurstEnabledImpl", ::Unity::Burst::BurstCompiler_BurstCompilerHelper*>();
}
inline void Unity::Burst::BurstCompiler_BurstCompilerHelper::setStaticF_IsBurstGenerated(bool  value)  {
::cordl_internals::setStaticField<bool, "IsBurstGenerated", ::Unity::Burst::BurstCompiler_BurstCompilerHelper*>(std::forward<bool>(value));
}
inline bool Unity::Burst::BurstCompiler_BurstCompilerHelper::getStaticF_IsBurstGenerated()  {
return ::cordl_internals::getStaticField<bool, "IsBurstGenerated", ::Unity::Burst::BurstCompiler_BurstCompilerHelper*>();
}
inline bool Unity::Burst::BurstCompiler_BurstCompilerHelper::IsBurstEnabled()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Burst::BurstCompiler_BurstCompilerHelper*>(),
                        {"IsBurstEnabled", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline void Unity::Burst::BurstCompiler_BurstCompilerHelper::DiscardedMethod(::by_ref<bool>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Burst::BurstCompiler_BurstCompilerHelper*>(),
                        {"DiscardedMethod", {}, {::i2c::type_of<::by_ref<bool>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline bool Unity::Burst::BurstCompiler_BurstCompilerHelper::IsCompiledByBurst(::System::Delegate*  del)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Burst::BurstCompiler_BurstCompilerHelper*>(),
                        {"IsCompiledByBurst", {}, {::i2c::type_of<::System::Delegate*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, del);
}
inline bool Unity::Burst::BurstCompiler_BurstCompilerHelper::IsBurstEnabled$BurstManaged()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Burst::BurstCompiler_BurstCompilerHelper*>(),
                        {"IsBurstEnabled$BurstManaged", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::Unity::Burst::BurstCompiler_BurstCompilerHelper::BurstCompiler_BurstCompilerHelper()   {
}
//  Writing Method size for method: ::Unity::Burst::BurstCompilerHelper_BurstCompiler_IsBurstEnabled_00000145$BurstDirectCall.GetFunctionPointerDiscard
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::System::IntPtr>)>(&::Unity::Burst::BurstCompilerHelper_BurstCompiler_IsBurstEnabled_00000145$BurstDirectCall::GetFunctionPointerDiscard)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0xae80910;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Burst::BurstCompilerHelper_BurstCompiler_IsBurstEnabled_00000145$BurstDirectCall*>(),
                        {"GetFunctionPointerDiscard", {}, {::i2c::type_of<::by_ref<::System::IntPtr>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Burst::BurstCompilerHelper_BurstCompiler_IsBurstEnabled_00000145$BurstDirectCall.GetFunctionPointer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)()>(&::Unity::Burst::BurstCompilerHelper_BurstCompiler_IsBurstEnabled_00000145$BurstDirectCall::GetFunctionPointer)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xae80a00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Burst::BurstCompilerHelper_BurstCompiler_IsBurstEnabled_00000145$BurstDirectCall*>(),
                        {"GetFunctionPointer", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Burst::BurstCompilerHelper_BurstCompiler_IsBurstEnabled_00000145$BurstDirectCall.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::Unity::Burst::BurstCompilerHelper_BurstCompiler_IsBurstEnabled_00000145$BurstDirectCall::Invoke)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0xae80570;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Burst::BurstCompilerHelper_BurstCompiler_IsBurstEnabled_00000145$BurstDirectCall*>(),
                        {"Invoke", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Unity::Burst::BurstCompilerHelper_BurstCompiler_IsBurstEnabled_00000145$BurstDirectCall::setStaticF_Pointer(::System::IntPtr  value)  {
::cordl_internals::setStaticField<::System::IntPtr, "Pointer", ::Unity::Burst::BurstCompilerHelper_BurstCompiler_IsBurstEnabled_00000145$BurstDirectCall*>(std::forward<::System::IntPtr>(value));
}
inline ::System::IntPtr Unity::Burst::BurstCompilerHelper_BurstCompiler_IsBurstEnabled_00000145$BurstDirectCall::getStaticF_Pointer()  {
return ::cordl_internals::getStaticField<::System::IntPtr, "Pointer", ::Unity::Burst::BurstCompilerHelper_BurstCompiler_IsBurstEnabled_00000145$BurstDirectCall*>();
}
inline void Unity::Burst::BurstCompilerHelper_BurstCompiler_IsBurstEnabled_00000145$BurstDirectCall::GetFunctionPointerDiscard(::by_ref<::System::IntPtr>  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Burst::BurstCompilerHelper_BurstCompiler_IsBurstEnabled_00000145$BurstDirectCall*>(),
                        {"GetFunctionPointerDiscard", {}, {::i2c::type_of<::by_ref<::System::IntPtr>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline ::System::IntPtr Unity::Burst::BurstCompilerHelper_BurstCompiler_IsBurstEnabled_00000145$BurstDirectCall::GetFunctionPointer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Burst::BurstCompilerHelper_BurstCompiler_IsBurstEnabled_00000145$BurstDirectCall*>(),
                        {"GetFunctionPointer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method);
}
inline bool Unity::Burst::BurstCompilerHelper_BurstCompiler_IsBurstEnabled_00000145$BurstDirectCall::Invoke()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Burst::BurstCompilerHelper_BurstCompiler_IsBurstEnabled_00000145$BurstDirectCall*>(),
                        {"Invoke", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::Unity::Burst::BurstCompilerHelper_BurstCompiler_IsBurstEnabled_00000145$BurstDirectCall::BurstCompilerHelper_BurstCompiler_IsBurstEnabled_00000145$BurstDirectCall()   {
}
//  Writing Method size for method: ::Unity::Burst::BurstCompilerHelper_BurstCompiler_IsBurstEnabled_00000145$PostfixBurstDelegate._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Burst::BurstCompilerHelper_BurstCompiler_IsBurstEnabled_00000145$PostfixBurstDelegate::*)(::System::Object*, ::System::IntPtr)>(&::Unity::Burst::BurstCompilerHelper_BurstCompiler_IsBurstEnabled_00000145$PostfixBurstDelegate::_ctor)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0xae80860;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Burst::BurstCompilerHelper_BurstCompiler_IsBurstEnabled_00000145$PostfixBurstDelegate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Burst::BurstCompilerHelper_BurstCompiler_IsBurstEnabled_00000145$PostfixBurstDelegate.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::Burst::BurstCompilerHelper_BurstCompiler_IsBurstEnabled_00000145$PostfixBurstDelegate::*)()>(&::Unity::Burst::BurstCompilerHelper_BurstCompiler_IsBurstEnabled_00000145$PostfixBurstDelegate::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xae808fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Unity::Burst::BurstCompilerHelper_BurstCompiler_IsBurstEnabled_00000145$PostfixBurstDelegate*>(),
                    {::i2c::class_of<::Unity::Burst::BurstCompilerHelper_BurstCompiler_IsBurstEnabled_00000145$PostfixBurstDelegate*>(), 13}
                ));
    return ___internal_method;
  }
};
inline void Unity::Burst::BurstCompilerHelper_BurstCompiler_IsBurstEnabled_00000145$PostfixBurstDelegate::_ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Burst::BurstCompilerHelper_BurstCompiler_IsBurstEnabled_00000145$PostfixBurstDelegate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1);
}
inline bool Unity::Burst::BurstCompilerHelper_BurstCompiler_IsBurstEnabled_00000145$PostfixBurstDelegate::Invoke()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Unity::Burst::BurstCompilerHelper_BurstCompiler_IsBurstEnabled_00000145$PostfixBurstDelegate*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::Unity::Burst::BurstCompilerHelper_BurstCompiler_IsBurstEnabled_00000145$PostfixBurstDelegate* Unity::Burst::BurstCompilerHelper_BurstCompiler_IsBurstEnabled_00000145$PostfixBurstDelegate::New_ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Unity::Burst::BurstCompilerHelper_BurstCompiler_IsBurstEnabled_00000145$PostfixBurstDelegate*>(_cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1));
}
// Ctor Parameters []
constexpr ::Unity::Burst::BurstCompilerHelper_BurstCompiler_IsBurstEnabled_00000145$PostfixBurstDelegate::BurstCompilerHelper_BurstCompiler_IsBurstEnabled_00000145$PostfixBurstDelegate()   {
}
//  Writing Method size for method: ::Unity::Burst::BurstCompilerHelper_BurstCompiler_IsBurstEnabledDelegate._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Burst::BurstCompilerHelper_BurstCompiler_IsBurstEnabledDelegate::*)(::System::Object*, ::System::IntPtr)>(&::Unity::Burst::BurstCompilerHelper_BurstCompiler_IsBurstEnabledDelegate::_ctor)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0xae80760;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Burst::BurstCompilerHelper_BurstCompiler_IsBurstEnabledDelegate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Burst::BurstCompilerHelper_BurstCompiler_IsBurstEnabledDelegate.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::Burst::BurstCompilerHelper_BurstCompiler_IsBurstEnabledDelegate::*)()>(&::Unity::Burst::BurstCompilerHelper_BurstCompiler_IsBurstEnabledDelegate::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xae8084c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Unity::Burst::BurstCompilerHelper_BurstCompiler_IsBurstEnabledDelegate*>(),
                    {::i2c::class_of<::Unity::Burst::BurstCompilerHelper_BurstCompiler_IsBurstEnabledDelegate*>(), 13}
                ));
    return ___internal_method;
  }
};
inline void Unity::Burst::BurstCompilerHelper_BurstCompiler_IsBurstEnabledDelegate::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Burst::BurstCompilerHelper_BurstCompiler_IsBurstEnabledDelegate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline bool Unity::Burst::BurstCompilerHelper_BurstCompiler_IsBurstEnabledDelegate::Invoke()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Unity::Burst::BurstCompilerHelper_BurstCompiler_IsBurstEnabledDelegate*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::Unity::Burst::BurstCompilerHelper_BurstCompiler_IsBurstEnabledDelegate* Unity::Burst::BurstCompilerHelper_BurstCompiler_IsBurstEnabledDelegate::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Unity::Burst::BurstCompilerHelper_BurstCompiler_IsBurstEnabledDelegate*>(object, method));
}
// Ctor Parameters []
constexpr ::Unity::Burst::BurstCompilerHelper_BurstCompiler_IsBurstEnabledDelegate::BurstCompilerHelper_BurstCompiler_IsBurstEnabledDelegate()   {
}
