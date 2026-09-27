#pragma once
// IWYU pragma private; include "UnityEngine/Localization/SmartFormat/Core/Parsing/Placeholder.hpp"
#include "UnityEngine/Localization/SmartFormat/Core/Parsing/zzzz__FormatItem_impl.hpp"
#include "UnityEngine/Localization/SmartFormat/Core/Parsing/zzzz__Placeholder_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/Localization/SmartFormat/Core/Parsing/zzzz__Format_def.hpp"
#include "UnityEngine/Localization/SmartFormat/Core/Parsing/zzzz__Selector_def.hpp"
//  Writing Method size for method: ::UnityEngine::Localization::SmartFormat::Core::Parsing::Placeholder.ReleaseToPool
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::SmartFormat::Core::Parsing::Placeholder::*)()>(&::UnityEngine::Localization::SmartFormat::Core::Parsing::Placeholder::ReleaseToPool)> {
  constexpr static std::size_t size = 0x1dc;
  constexpr static std::size_t addrs = 0xb047a34;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Core::Parsing::Placeholder*>(),
                        {"ReleaseToPool", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::SmartFormat::Core::Parsing::Placeholder.get_NestedDepth
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Localization::SmartFormat::Core::Parsing::Placeholder::*)()>(&::UnityEngine::Localization::SmartFormat::Core::Parsing::Placeholder::get_NestedDepth)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb047c10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Core::Parsing::Placeholder*>(),
                        {"get_NestedDepth", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::SmartFormat::Core::Parsing::Placeholder.set_NestedDepth
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::SmartFormat::Core::Parsing::Placeholder::*)(int32_t)>(&::UnityEngine::Localization::SmartFormat::Core::Parsing::Placeholder::set_NestedDepth)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb047c18;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Core::Parsing::Placeholder*>(),
                        {"set_NestedDepth", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::SmartFormat::Core::Parsing::Placeholder.get_Selectors
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::UnityEngine::Localization::SmartFormat::Core::Parsing::Selector*>* (::UnityEngine::Localization::SmartFormat::Core::Parsing::Placeholder::*)()>(&::UnityEngine::Localization::SmartFormat::Core::Parsing::Placeholder::get_Selectors)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb047c20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Core::Parsing::Placeholder*>(),
                        {"get_Selectors", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::SmartFormat::Core::Parsing::Placeholder.get_Alignment
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Localization::SmartFormat::Core::Parsing::Placeholder::*)()>(&::UnityEngine::Localization::SmartFormat::Core::Parsing::Placeholder::get_Alignment)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb047c28;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Core::Parsing::Placeholder*>(),
                        {"get_Alignment", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::SmartFormat::Core::Parsing::Placeholder.set_Alignment
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::SmartFormat::Core::Parsing::Placeholder::*)(int32_t)>(&::UnityEngine::Localization::SmartFormat::Core::Parsing::Placeholder::set_Alignment)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb047c30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Core::Parsing::Placeholder*>(),
                        {"set_Alignment", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::SmartFormat::Core::Parsing::Placeholder.get_FormatterName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::Localization::SmartFormat::Core::Parsing::Placeholder::*)()>(&::UnityEngine::Localization::SmartFormat::Core::Parsing::Placeholder::get_FormatterName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb047c38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Core::Parsing::Placeholder*>(),
                        {"get_FormatterName", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::SmartFormat::Core::Parsing::Placeholder.set_FormatterName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::SmartFormat::Core::Parsing::Placeholder::*)(::StringW)>(&::UnityEngine::Localization::SmartFormat::Core::Parsing::Placeholder::set_FormatterName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb047c40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Core::Parsing::Placeholder*>(),
                        {"set_FormatterName", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::SmartFormat::Core::Parsing::Placeholder.get_FormatterOptions
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::Localization::SmartFormat::Core::Parsing::Placeholder::*)()>(&::UnityEngine::Localization::SmartFormat::Core::Parsing::Placeholder::get_FormatterOptions)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb047c48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Core::Parsing::Placeholder*>(),
                        {"get_FormatterOptions", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::SmartFormat::Core::Parsing::Placeholder.set_FormatterOptions
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::SmartFormat::Core::Parsing::Placeholder::*)(::StringW)>(&::UnityEngine::Localization::SmartFormat::Core::Parsing::Placeholder::set_FormatterOptions)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb047c50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Core::Parsing::Placeholder*>(),
                        {"set_FormatterOptions", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::SmartFormat::Core::Parsing::Placeholder.get_Format
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Localization::SmartFormat::Core::Parsing::Format* (::UnityEngine::Localization::SmartFormat::Core::Parsing::Placeholder::*)()>(&::UnityEngine::Localization::SmartFormat::Core::Parsing::Placeholder::get_Format)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb047c58;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Core::Parsing::Placeholder*>(),
                        {"get_Format", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::SmartFormat::Core::Parsing::Placeholder.set_Format
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::SmartFormat::Core::Parsing::Placeholder::*)(::UnityEngine::Localization::SmartFormat::Core::Parsing::Format*)>(&::UnityEngine::Localization::SmartFormat::Core::Parsing::Placeholder::set_Format)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb047c60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Core::Parsing::Placeholder*>(),
                        {"set_Format", {}, {::i2c::type_of<::UnityEngine::Localization::SmartFormat::Core::Parsing::Format*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::SmartFormat::Core::Parsing::Placeholder.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::Localization::SmartFormat::Core::Parsing::Placeholder::*)()>(&::UnityEngine::Localization::SmartFormat::Core::Parsing::Placeholder::ToString)> {
  constexpr static std::size_t size = 0x46c;
  constexpr static std::size_t addrs = 0xb047c68;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Core::Parsing::Placeholder*>(),
                    {::i2c::class_of<::UnityEngine::Localization::SmartFormat::Core::Parsing::Placeholder*>(), 3}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::SmartFormat::Core::Parsing::Placeholder._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::SmartFormat::Core::Parsing::Placeholder::*)()>(&::UnityEngine::Localization::SmartFormat::Core::Parsing::Placeholder::_ctor)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0xb0480d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Core::Parsing::Placeholder*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& UnityEngine::Localization::SmartFormat::Core::Parsing::Placeholder::__cordl_internal_get__NestedDepth_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____NestedDepth_k__BackingField;
}
constexpr int32_t const& UnityEngine::Localization::SmartFormat::Core::Parsing::Placeholder::__cordl_internal_get__NestedDepth_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____NestedDepth_k__BackingField;
}
constexpr void UnityEngine::Localization::SmartFormat::Core::Parsing::Placeholder::__cordl_internal_set__NestedDepth_k__BackingField(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____NestedDepth_k__BackingField = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Localization::SmartFormat::Core::Parsing::Selector*>*& UnityEngine::Localization::SmartFormat::Core::Parsing::Placeholder::__cordl_internal_get__Selectors_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Selectors_k__BackingField;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Localization::SmartFormat::Core::Parsing::Selector*>* const& UnityEngine::Localization::SmartFormat::Core::Parsing::Placeholder::__cordl_internal_get__Selectors_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Selectors_k__BackingField;
}
constexpr void UnityEngine::Localization::SmartFormat::Core::Parsing::Placeholder::__cordl_internal_set__Selectors_k__BackingField(::System::Collections::Generic::List_1<::UnityEngine::Localization::SmartFormat::Core::Parsing::Selector*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Selectors_k__BackingField = value;
}
constexpr int32_t& UnityEngine::Localization::SmartFormat::Core::Parsing::Placeholder::__cordl_internal_get__Alignment_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Alignment_k__BackingField;
}
constexpr int32_t const& UnityEngine::Localization::SmartFormat::Core::Parsing::Placeholder::__cordl_internal_get__Alignment_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Alignment_k__BackingField;
}
constexpr void UnityEngine::Localization::SmartFormat::Core::Parsing::Placeholder::__cordl_internal_set__Alignment_k__BackingField(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Alignment_k__BackingField = value;
}
constexpr ::StringW& UnityEngine::Localization::SmartFormat::Core::Parsing::Placeholder::__cordl_internal_get__FormatterName_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____FormatterName_k__BackingField;
}
constexpr ::StringW const& UnityEngine::Localization::SmartFormat::Core::Parsing::Placeholder::__cordl_internal_get__FormatterName_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____FormatterName_k__BackingField;
}
constexpr void UnityEngine::Localization::SmartFormat::Core::Parsing::Placeholder::__cordl_internal_set__FormatterName_k__BackingField(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____FormatterName_k__BackingField = value;
}
constexpr ::StringW& UnityEngine::Localization::SmartFormat::Core::Parsing::Placeholder::__cordl_internal_get__FormatterOptions_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____FormatterOptions_k__BackingField;
}
constexpr ::StringW const& UnityEngine::Localization::SmartFormat::Core::Parsing::Placeholder::__cordl_internal_get__FormatterOptions_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____FormatterOptions_k__BackingField;
}
constexpr void UnityEngine::Localization::SmartFormat::Core::Parsing::Placeholder::__cordl_internal_set__FormatterOptions_k__BackingField(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____FormatterOptions_k__BackingField = value;
}
constexpr ::UnityEngine::Localization::SmartFormat::Core::Parsing::Format*& UnityEngine::Localization::SmartFormat::Core::Parsing::Placeholder::__cordl_internal_get__Format_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Format_k__BackingField;
}
constexpr ::UnityEngine::Localization::SmartFormat::Core::Parsing::Format* const& UnityEngine::Localization::SmartFormat::Core::Parsing::Placeholder::__cordl_internal_get__Format_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Format_k__BackingField;
}
constexpr void UnityEngine::Localization::SmartFormat::Core::Parsing::Placeholder::__cordl_internal_set__Format_k__BackingField(::UnityEngine::Localization::SmartFormat::Core::Parsing::Format*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Format_k__BackingField = value;
}
inline void UnityEngine::Localization::SmartFormat::Core::Parsing::Placeholder::ReleaseToPool()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Core::Parsing::Placeholder*>(),
                        {"ReleaseToPool", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int32_t UnityEngine::Localization::SmartFormat::Core::Parsing::Placeholder::get_NestedDepth()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Core::Parsing::Placeholder*>(),
                        {"get_NestedDepth", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void UnityEngine::Localization::SmartFormat::Core::Parsing::Placeholder::set_NestedDepth(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Core::Parsing::Placeholder*>(),
                        {"set_NestedDepth", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Collections::Generic::List_1<::UnityEngine::Localization::SmartFormat::Core::Parsing::Selector*>* UnityEngine::Localization::SmartFormat::Core::Parsing::Placeholder::get_Selectors()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Core::Parsing::Placeholder*>(),
                        {"get_Selectors", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityEngine::Localization::SmartFormat::Core::Parsing::Selector*>*>(this, ___internal_method);
}
inline int32_t UnityEngine::Localization::SmartFormat::Core::Parsing::Placeholder::get_Alignment()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Core::Parsing::Placeholder*>(),
                        {"get_Alignment", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void UnityEngine::Localization::SmartFormat::Core::Parsing::Placeholder::set_Alignment(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Core::Parsing::Placeholder*>(),
                        {"set_Alignment", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW UnityEngine::Localization::SmartFormat::Core::Parsing::Placeholder::get_FormatterName()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Core::Parsing::Placeholder*>(),
                        {"get_FormatterName", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void UnityEngine::Localization::SmartFormat::Core::Parsing::Placeholder::set_FormatterName(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Core::Parsing::Placeholder*>(),
                        {"set_FormatterName", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW UnityEngine::Localization::SmartFormat::Core::Parsing::Placeholder::get_FormatterOptions()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Core::Parsing::Placeholder*>(),
                        {"get_FormatterOptions", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void UnityEngine::Localization::SmartFormat::Core::Parsing::Placeholder::set_FormatterOptions(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Core::Parsing::Placeholder*>(),
                        {"set_FormatterOptions", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Localization::SmartFormat::Core::Parsing::Format* UnityEngine::Localization::SmartFormat::Core::Parsing::Placeholder::get_Format()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Core::Parsing::Placeholder*>(),
                        {"get_Format", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Localization::SmartFormat::Core::Parsing::Format*>(this, ___internal_method);
}
inline void UnityEngine::Localization::SmartFormat::Core::Parsing::Placeholder::set_Format(::UnityEngine::Localization::SmartFormat::Core::Parsing::Format*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Core::Parsing::Placeholder*>(),
                        {"set_Format", {}, {::i2c::type_of<::UnityEngine::Localization::SmartFormat::Core::Parsing::Format*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW UnityEngine::Localization::SmartFormat::Core::Parsing::Placeholder::ToString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::Localization::SmartFormat::Core::Parsing::Placeholder*>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void UnityEngine::Localization::SmartFormat::Core::Parsing::Placeholder::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Core::Parsing::Placeholder*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Localization::SmartFormat::Core::Parsing::Placeholder* UnityEngine::Localization::SmartFormat::Core::Parsing::Placeholder::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Localization::SmartFormat::Core::Parsing::Placeholder*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Localization::SmartFormat::Core::Parsing::Placeholder::Placeholder()   {
}
