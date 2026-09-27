#pragma once
// IWYU pragma private; include "UnityEngine/Localization/SmartFormat/Core/Parsing/Selector.hpp"
#include "UnityEngine/Localization/SmartFormat/Core/Parsing/zzzz__FormatItem_impl.hpp"
#include "UnityEngine/Localization/SmartFormat/Core/Parsing/zzzz__Selector_def.hpp"
//  Writing Method size for method: ::UnityEngine::Localization::SmartFormat::Core::Parsing::Selector.Clear
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::SmartFormat::Core::Parsing::Selector::*)()>(&::UnityEngine::Localization::SmartFormat::Core::Parsing::Selector::Clear)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0xb04815c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Core::Parsing::Selector*>(),
                    {::i2c::class_of<::UnityEngine::Localization::SmartFormat::Core::Parsing::Selector*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::SmartFormat::Core::Parsing::Selector.get_SelectorIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Localization::SmartFormat::Core::Parsing::Selector::*)()>(&::UnityEngine::Localization::SmartFormat::Core::Parsing::Selector::get_SelectorIndex)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb048180;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Core::Parsing::Selector*>(),
                        {"get_SelectorIndex", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::SmartFormat::Core::Parsing::Selector.set_SelectorIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::SmartFormat::Core::Parsing::Selector::*)(int32_t)>(&::UnityEngine::Localization::SmartFormat::Core::Parsing::Selector::set_SelectorIndex)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb048188;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Core::Parsing::Selector*>(),
                        {"set_SelectorIndex", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::SmartFormat::Core::Parsing::Selector.get_Operator
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::Localization::SmartFormat::Core::Parsing::Selector::*)()>(&::UnityEngine::Localization::SmartFormat::Core::Parsing::Selector::get_Operator)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xb048190;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Core::Parsing::Selector*>(),
                        {"get_Operator", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::SmartFormat::Core::Parsing::Selector._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::SmartFormat::Core::Parsing::Selector::*)()>(&::UnityEngine::Localization::SmartFormat::Core::Parsing::Selector::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb0481e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Core::Parsing::Selector*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& UnityEngine::Localization::SmartFormat::Core::Parsing::Selector::__cordl_internal_get_m_Operator()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Operator;
}
constexpr ::StringW const& UnityEngine::Localization::SmartFormat::Core::Parsing::Selector::__cordl_internal_get_m_Operator() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Operator;
}
constexpr void UnityEngine::Localization::SmartFormat::Core::Parsing::Selector::__cordl_internal_set_m_Operator(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Operator = value;
}
constexpr int32_t& UnityEngine::Localization::SmartFormat::Core::Parsing::Selector::__cordl_internal_get_operatorStart()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___operatorStart;
}
constexpr int32_t const& UnityEngine::Localization::SmartFormat::Core::Parsing::Selector::__cordl_internal_get_operatorStart() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___operatorStart;
}
constexpr void UnityEngine::Localization::SmartFormat::Core::Parsing::Selector::__cordl_internal_set_operatorStart(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___operatorStart = value;
}
constexpr int32_t& UnityEngine::Localization::SmartFormat::Core::Parsing::Selector::__cordl_internal_get__SelectorIndex_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____SelectorIndex_k__BackingField;
}
constexpr int32_t const& UnityEngine::Localization::SmartFormat::Core::Parsing::Selector::__cordl_internal_get__SelectorIndex_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____SelectorIndex_k__BackingField;
}
constexpr void UnityEngine::Localization::SmartFormat::Core::Parsing::Selector::__cordl_internal_set__SelectorIndex_k__BackingField(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____SelectorIndex_k__BackingField = value;
}
inline void UnityEngine::Localization::SmartFormat::Core::Parsing::Selector::Clear()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::Localization::SmartFormat::Core::Parsing::Selector*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int32_t UnityEngine::Localization::SmartFormat::Core::Parsing::Selector::get_SelectorIndex()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Core::Parsing::Selector*>(),
                        {"get_SelectorIndex", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void UnityEngine::Localization::SmartFormat::Core::Parsing::Selector::set_SelectorIndex(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Core::Parsing::Selector*>(),
                        {"set_SelectorIndex", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW UnityEngine::Localization::SmartFormat::Core::Parsing::Selector::get_Operator()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Core::Parsing::Selector*>(),
                        {"get_Operator", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void UnityEngine::Localization::SmartFormat::Core::Parsing::Selector::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Core::Parsing::Selector*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Localization::SmartFormat::Core::Parsing::Selector* UnityEngine::Localization::SmartFormat::Core::Parsing::Selector::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Localization::SmartFormat::Core::Parsing::Selector*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Localization::SmartFormat::Core::Parsing::Selector::Selector()   {
}
