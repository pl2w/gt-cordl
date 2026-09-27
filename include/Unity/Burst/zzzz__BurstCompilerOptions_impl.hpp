#pragma once
// IWYU pragma private; include "Unity/Burst/BurstCompilerOptions.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Burst/zzzz__BurstCompilerOptions_def.hpp"
#include "System/Reflection/zzzz__MemberInfo_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "Unity/Burst/zzzz__BurstCompileAttribute_def.hpp"
//  Writing Method size for method: ::Unity::Burst::BurstCompilerOptions._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Burst::BurstCompilerOptions::*)(bool)>(&::Unity::Burst::BurstCompilerOptions::_ctor)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0xae80508;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Burst::BurstCompilerOptions*>(),
                        {".ctor", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Burst::BurstCompilerOptions.get_IsGlobal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::Burst::BurstCompilerOptions::*)()>(&::Unity::Burst::BurstCompilerOptions::get_IsGlobal)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xae80c4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Burst::BurstCompilerOptions*>(),
                        {"get_IsGlobal", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Burst::BurstCompilerOptions.get_EnableBurstCompilation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::Burst::BurstCompilerOptions::*)()>(&::Unity::Burst::BurstCompilerOptions::get_EnableBurstCompilation)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xae80c54;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Burst::BurstCompilerOptions*>(),
                        {"get_EnableBurstCompilation", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Burst::BurstCompilerOptions.set_EnableBurstCompilation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Burst::BurstCompilerOptions::*)(bool)>(&::Unity::Burst::BurstCompilerOptions::set_EnableBurstCompilation)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0xae80afc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Burst::BurstCompilerOptions*>(),
                        {"set_EnableBurstCompilation", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Burst::BurstCompilerOptions.set_EnableBurstSafetyChecks
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Burst::BurstCompilerOptions::*)(bool)>(&::Unity::Burst::BurstCompilerOptions::set_EnableBurstSafetyChecks)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0xae80c1c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Burst::BurstCompilerOptions*>(),
                        {"set_EnableBurstSafetyChecks", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Burst::BurstCompilerOptions.get_OptionsChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Action* (::Unity::Burst::BurstCompilerOptions::*)()>(&::Unity::Burst::BurstCompilerOptions::get_OptionsChanged)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xae80c7c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Burst::BurstCompilerOptions*>(),
                        {"get_OptionsChanged", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Burst::BurstCompilerOptions.TryGetAttribute
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Reflection::MemberInfo*, ::by_ref<::Unity::Burst::BurstCompileAttribute*>)>(&::Unity::Burst::BurstCompilerOptions::TryGetAttribute)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0xae80c84;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Burst::BurstCompilerOptions*>(),
                        {"TryGetAttribute", {}, {::i2c::type_of<::System::Reflection::MemberInfo*>(), ::i2c::type_of<::by_ref<::Unity::Burst::BurstCompileAttribute*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Burst::BurstCompilerOptions.GetBurstCompileAttribute
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Burst::BurstCompileAttribute* (*)(::System::Reflection::MemberInfo*)>(&::Unity::Burst::BurstCompilerOptions::GetBurstCompileAttribute)> {
  constexpr static std::size_t size = 0x3f4;
  constexpr static std::size_t addrs = 0xae80d28;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Burst::BurstCompilerOptions*>(),
                        {"GetBurstCompileAttribute", {}, {::i2c::type_of<::System::Reflection::MemberInfo*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Burst::BurstCompilerOptions.HasBurstCompileAttribute
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Reflection::MemberInfo*)>(&::Unity::Burst::BurstCompilerOptions::HasBurstCompileAttribute)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0xae80348;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Burst::BurstCompilerOptions*>(),
                        {"HasBurstCompileAttribute", {}, {::i2c::type_of<::System::Reflection::MemberInfo*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Burst::BurstCompilerOptions.OnOptionsChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Burst::BurstCompilerOptions::*)()>(&::Unity::Burst::BurstCompilerOptions::OnOptionsChanged)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xae80c5c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Burst::BurstCompilerOptions*>(),
                        {"OnOptionsChanged", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Burst::BurstCompilerOptions.MaybeTriggerRecompilation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Burst::BurstCompilerOptions::*)()>(&::Unity::Burst::BurstCompilerOptions::MaybeTriggerRecompilation)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xae80c78;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Burst::BurstCompilerOptions*>(),
                        {"MaybeTriggerRecompilation", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Burst::BurstCompilerOptions.CheckIsSecondaryUnityProcess
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::Unity::Burst::BurstCompilerOptions::CheckIsSecondaryUnityProcess)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xae81294;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Burst::BurstCompilerOptions*>(),
                        {"CheckIsSecondaryUnityProcess", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& Unity::Burst::BurstCompilerOptions::__cordl_internal_get__enableBurstCompilation()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____enableBurstCompilation;
}
constexpr bool const& Unity::Burst::BurstCompilerOptions::__cordl_internal_get__enableBurstCompilation() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____enableBurstCompilation;
}
constexpr void Unity::Burst::BurstCompilerOptions::__cordl_internal_set__enableBurstCompilation(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____enableBurstCompilation = value;
}
constexpr bool& Unity::Burst::BurstCompilerOptions::__cordl_internal_get__enableBurstSafetyChecks()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____enableBurstSafetyChecks;
}
constexpr bool const& Unity::Burst::BurstCompilerOptions::__cordl_internal_get__enableBurstSafetyChecks() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____enableBurstSafetyChecks;
}
constexpr void Unity::Burst::BurstCompilerOptions::__cordl_internal_set__enableBurstSafetyChecks(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____enableBurstSafetyChecks = value;
}
constexpr bool& Unity::Burst::BurstCompilerOptions::__cordl_internal_get__IsGlobal_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____IsGlobal_k__BackingField;
}
constexpr bool const& Unity::Burst::BurstCompilerOptions::__cordl_internal_get__IsGlobal_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____IsGlobal_k__BackingField;
}
constexpr void Unity::Burst::BurstCompilerOptions::__cordl_internal_set__IsGlobal_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____IsGlobal_k__BackingField = value;
}
constexpr ::System::Action*& Unity::Burst::BurstCompilerOptions::__cordl_internal_get__OptionsChanged_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____OptionsChanged_k__BackingField;
}
constexpr ::System::Action* const& Unity::Burst::BurstCompilerOptions::__cordl_internal_get__OptionsChanged_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____OptionsChanged_k__BackingField;
}
constexpr void Unity::Burst::BurstCompilerOptions::__cordl_internal_set__OptionsChanged_k__BackingField(::System::Action*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____OptionsChanged_k__BackingField = value;
}
inline void Unity::Burst::BurstCompilerOptions::setStaticF_ForceDisableBurstCompilation(bool  value)  {
::cordl_internals::setStaticField<bool, "ForceDisableBurstCompilation", ::Unity::Burst::BurstCompilerOptions*>(std::forward<bool>(value));
}
inline bool Unity::Burst::BurstCompilerOptions::getStaticF_ForceDisableBurstCompilation()  {
return ::cordl_internals::getStaticField<bool, "ForceDisableBurstCompilation", ::Unity::Burst::BurstCompilerOptions*>();
}
inline void Unity::Burst::BurstCompilerOptions::setStaticF_ForceBurstCompilationSynchronously(bool  value)  {
::cordl_internals::setStaticField<bool, "ForceBurstCompilationSynchronously", ::Unity::Burst::BurstCompilerOptions*>(std::forward<bool>(value));
}
inline bool Unity::Burst::BurstCompilerOptions::getStaticF_ForceBurstCompilationSynchronously()  {
return ::cordl_internals::getStaticField<bool, "ForceBurstCompilationSynchronously", ::Unity::Burst::BurstCompilerOptions*>();
}
inline void Unity::Burst::BurstCompilerOptions::setStaticF_IsSecondaryUnityProcess(bool  value)  {
::cordl_internals::setStaticField<bool, "IsSecondaryUnityProcess", ::Unity::Burst::BurstCompilerOptions*>(std::forward<bool>(value));
}
inline bool Unity::Burst::BurstCompilerOptions::getStaticF_IsSecondaryUnityProcess()  {
return ::cordl_internals::getStaticField<bool, "IsSecondaryUnityProcess", ::Unity::Burst::BurstCompilerOptions*>();
}
inline void Unity::Burst::BurstCompilerOptions::_ctor(bool  isGlobal)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Burst::BurstCompilerOptions*>(),
                        {".ctor", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, isGlobal);
}
inline bool Unity::Burst::BurstCompilerOptions::get_IsGlobal()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Burst::BurstCompilerOptions*>(),
                        {"get_IsGlobal", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Unity::Burst::BurstCompilerOptions::get_EnableBurstCompilation()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Burst::BurstCompilerOptions*>(),
                        {"get_EnableBurstCompilation", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Unity::Burst::BurstCompilerOptions::set_EnableBurstCompilation(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Burst::BurstCompilerOptions*>(),
                        {"set_EnableBurstCompilation", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Unity::Burst::BurstCompilerOptions::set_EnableBurstSafetyChecks(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Burst::BurstCompilerOptions*>(),
                        {"set_EnableBurstSafetyChecks", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Action* Unity::Burst::BurstCompilerOptions::get_OptionsChanged()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Burst::BurstCompilerOptions*>(),
                        {"get_OptionsChanged", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Action*>(this, ___internal_method);
}
inline bool Unity::Burst::BurstCompilerOptions::TryGetAttribute(::System::Reflection::MemberInfo*  member, ::by_ref<::Unity::Burst::BurstCompileAttribute*>  attribute)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Burst::BurstCompilerOptions*>(),
                        {"TryGetAttribute", {}, {::i2c::type_of<::System::Reflection::MemberInfo*>(), ::i2c::type_of<::by_ref<::Unity::Burst::BurstCompileAttribute*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, member, attribute);
}
inline ::Unity::Burst::BurstCompileAttribute* Unity::Burst::BurstCompilerOptions::GetBurstCompileAttribute(::System::Reflection::MemberInfo*  memberInfo)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Burst::BurstCompilerOptions*>(),
                        {"GetBurstCompileAttribute", {}, {::i2c::type_of<::System::Reflection::MemberInfo*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Burst::BurstCompileAttribute*>(nullptr, ___internal_method, memberInfo);
}
inline bool Unity::Burst::BurstCompilerOptions::HasBurstCompileAttribute(::System::Reflection::MemberInfo*  member)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Burst::BurstCompilerOptions*>(),
                        {"HasBurstCompileAttribute", {}, {::i2c::type_of<::System::Reflection::MemberInfo*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, member);
}
inline void Unity::Burst::BurstCompilerOptions::OnOptionsChanged()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Burst::BurstCompilerOptions*>(),
                        {"OnOptionsChanged", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Unity::Burst::BurstCompilerOptions::MaybeTriggerRecompilation()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Burst::BurstCompilerOptions*>(),
                        {"MaybeTriggerRecompilation", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Unity::Burst::BurstCompilerOptions::CheckIsSecondaryUnityProcess()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Burst::BurstCompilerOptions*>(),
                        {"CheckIsSecondaryUnityProcess", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline ::Unity::Burst::BurstCompilerOptions* Unity::Burst::BurstCompilerOptions::New_ctor(bool  isGlobal)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Unity::Burst::BurstCompilerOptions*>(isGlobal));
}
// Ctor Parameters []
constexpr ::Unity::Burst::BurstCompilerOptions::BurstCompilerOptions()   {
}
