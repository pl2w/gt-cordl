#pragma once
// IWYU pragma private; include "UnityEngine/Localization/SmartFormat/Core/Extensions/FormatterBase.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Localization/SmartFormat/Core/Extensions/zzzz__FormatterBase_def.hpp"
#include "UnityEngine/Localization/SmartFormat/Core/Extensions/zzzz__IFormatter_def.hpp"
#include "UnityEngine/Localization/SmartFormat/Core/Extensions/zzzz__IFormattingInfo_def.hpp"
#include "UnityEngine/zzzz__ISerializationCallbackReceiver_def.hpp"
//  Writing Method size for method: ::UnityEngine::Localization::SmartFormat::Core::Extensions::FormatterBase.get_Names
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::StringW> (::UnityEngine::Localization::SmartFormat::Core::Extensions::FormatterBase::*)()>(&::UnityEngine::Localization::SmartFormat::Core::Extensions::FormatterBase::get_Names)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb0493bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Core::Extensions::FormatterBase*>(),
                        {"get_Names", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::SmartFormat::Core::Extensions::FormatterBase.set_Names
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::SmartFormat::Core::Extensions::FormatterBase::*)(::ArrayW<::StringW>)>(&::UnityEngine::Localization::SmartFormat::Core::Extensions::FormatterBase::set_Names)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb0493c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Core::Extensions::FormatterBase*>(),
                        {"set_Names", {}, {::i2c::type_of<::ArrayW<::StringW>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::SmartFormat::Core::Extensions::FormatterBase.get_DefaultNames
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::StringW> (::UnityEngine::Localization::SmartFormat::Core::Extensions::FormatterBase::*)()>(&::UnityEngine::Localization::SmartFormat::Core::Extensions::FormatterBase::get_DefaultNames)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Core::Extensions::FormatterBase*>(),
                    {::i2c::class_of<::UnityEngine::Localization::SmartFormat::Core::Extensions::FormatterBase*>(), 9}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::SmartFormat::Core::Extensions::FormatterBase.TryEvaluateFormat
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Localization::SmartFormat::Core::Extensions::FormatterBase::*)(::UnityEngine::Localization::SmartFormat::Core::Extensions::IFormattingInfo*)>(&::UnityEngine::Localization::SmartFormat::Core::Extensions::FormatterBase::TryEvaluateFormat)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Core::Extensions::FormatterBase*>(),
                    {::i2c::class_of<::UnityEngine::Localization::SmartFormat::Core::Extensions::FormatterBase*>(), 10}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::SmartFormat::Core::Extensions::FormatterBase.OnAfterDeserialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::SmartFormat::Core::Extensions::FormatterBase::*)()>(&::UnityEngine::Localization::SmartFormat::Core::Extensions::FormatterBase::OnAfterDeserialize)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0xb0493cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Core::Extensions::FormatterBase*>(),
                    {::i2c::class_of<::UnityEngine::Localization::SmartFormat::Core::Extensions::FormatterBase*>(), 11}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::SmartFormat::Core::Extensions::FormatterBase.OnBeforeSerialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::SmartFormat::Core::Extensions::FormatterBase::*)()>(&::UnityEngine::Localization::SmartFormat::Core::Extensions::FormatterBase::OnBeforeSerialize)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xb049420;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Core::Extensions::FormatterBase*>(),
                        {"OnBeforeSerialize", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::SmartFormat::Core::Extensions::FormatterBase._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::SmartFormat::Core::Extensions::FormatterBase::*)()>(&::UnityEngine::Localization::SmartFormat::Core::Extensions::FormatterBase::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb049424;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Core::Extensions::FormatterBase*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::StringW>& UnityEngine::Localization::SmartFormat::Core::Extensions::FormatterBase::__cordl_internal_get_m_Names()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Names;
}
constexpr ::ArrayW<::StringW> const& UnityEngine::Localization::SmartFormat::Core::Extensions::FormatterBase::__cordl_internal_get_m_Names() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Names;
}
constexpr void UnityEngine::Localization::SmartFormat::Core::Extensions::FormatterBase::__cordl_internal_set_m_Names(::ArrayW<::StringW>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Names = value;
}
inline ::ArrayW<::StringW> UnityEngine::Localization::SmartFormat::Core::Extensions::FormatterBase::get_Names()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Core::Extensions::FormatterBase*>(),
                        {"get_Names", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::StringW>>(this, ___internal_method);
}
inline void UnityEngine::Localization::SmartFormat::Core::Extensions::FormatterBase::set_Names(::ArrayW<::StringW>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Core::Extensions::FormatterBase*>(),
                        {"set_Names", {}, {::i2c::type_of<::ArrayW<::StringW>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::ArrayW<::StringW> UnityEngine::Localization::SmartFormat::Core::Extensions::FormatterBase::get_DefaultNames()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::Localization::SmartFormat::Core::Extensions::FormatterBase*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::StringW>>(this, ___internal_method);
}
inline bool UnityEngine::Localization::SmartFormat::Core::Extensions::FormatterBase::TryEvaluateFormat(::UnityEngine::Localization::SmartFormat::Core::Extensions::IFormattingInfo*  formattingInfo)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::Localization::SmartFormat::Core::Extensions::FormatterBase*>(), 10}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, formattingInfo);
}
inline void UnityEngine::Localization::SmartFormat::Core::Extensions::FormatterBase::OnAfterDeserialize()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::Localization::SmartFormat::Core::Extensions::FormatterBase*>(), 11}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Localization::SmartFormat::Core::Extensions::FormatterBase::OnBeforeSerialize()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Core::Extensions::FormatterBase*>(),
                        {"OnBeforeSerialize", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Localization::SmartFormat::Core::Extensions::FormatterBase::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Core::Extensions::FormatterBase*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Localization::SmartFormat::Core::Extensions::FormatterBase* UnityEngine::Localization::SmartFormat::Core::Extensions::FormatterBase::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Localization::SmartFormat::Core::Extensions::FormatterBase*>());
}
/// @brief Convert operator to "::UnityEngine::Localization::SmartFormat::Core::Extensions::IFormatter"
constexpr  UnityEngine::Localization::SmartFormat::Core::Extensions::FormatterBase::operator ::UnityEngine::Localization::SmartFormat::Core::Extensions::IFormatter*() noexcept {
return static_cast<::UnityEngine::Localization::SmartFormat::Core::Extensions::IFormatter*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::Localization::SmartFormat::Core::Extensions::IFormatter"
constexpr ::UnityEngine::Localization::SmartFormat::Core::Extensions::IFormatter* UnityEngine::Localization::SmartFormat::Core::Extensions::FormatterBase::i___UnityEngine__Localization__SmartFormat__Core__Extensions__IFormatter() noexcept {
return static_cast<::UnityEngine::Localization::SmartFormat::Core::Extensions::IFormatter*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::UnityEngine::ISerializationCallbackReceiver"
constexpr  UnityEngine::Localization::SmartFormat::Core::Extensions::FormatterBase::operator ::UnityEngine::ISerializationCallbackReceiver*() noexcept {
return static_cast<::UnityEngine::ISerializationCallbackReceiver*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::ISerializationCallbackReceiver"
constexpr ::UnityEngine::ISerializationCallbackReceiver* UnityEngine::Localization::SmartFormat::Core::Extensions::FormatterBase::i___UnityEngine__ISerializationCallbackReceiver() noexcept {
return static_cast<::UnityEngine::ISerializationCallbackReceiver*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::Localization::SmartFormat::Core::Extensions::FormatterBase::FormatterBase()   {
}
