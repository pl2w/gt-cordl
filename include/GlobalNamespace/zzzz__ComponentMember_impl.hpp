#pragma once
// IWYU pragma private; include "GlobalNamespace/ComponentMember.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__ComponentMember_def.hpp"
#include "System/zzzz__Func_1_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::ComponentMember.get_Name
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::ComponentMember::*)()>(&::GlobalNamespace::ComponentMember::get_Name)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x566f854;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ComponentMember*>(),
                        {"get_Name", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ComponentMember.get_Value
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::ComponentMember::*)()>(&::GlobalNamespace::ComponentMember::get_Value)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x566f85c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ComponentMember*>(),
                        {"get_Value", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ComponentMember.get_IsStarred
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::ComponentMember::*)()>(&::GlobalNamespace::ComponentMember::get_IsStarred)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x566f87c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ComponentMember*>(),
                        {"get_IsStarred", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ComponentMember.get_Color
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::ComponentMember::*)()>(&::GlobalNamespace::ComponentMember::get_Color)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x566f884;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ComponentMember*>(),
                        {"get_Color", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ComponentMember._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ComponentMember::*)(::StringW, ::System::Func_1<::StringW>*, bool, ::StringW)>(&::GlobalNamespace::ComponentMember::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x566f88c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ComponentMember*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Func_1<::StringW>*>(), ::i2c::type_of<bool>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& GlobalNamespace::ComponentMember::__cordl_internal_get__Name_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Name_k__BackingField;
}
constexpr ::StringW const& GlobalNamespace::ComponentMember::__cordl_internal_get__Name_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Name_k__BackingField;
}
constexpr void GlobalNamespace::ComponentMember::__cordl_internal_set__Name_k__BackingField(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Name_k__BackingField = value;
}
constexpr bool& GlobalNamespace::ComponentMember::__cordl_internal_get__IsStarred_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____IsStarred_k__BackingField;
}
constexpr bool const& GlobalNamespace::ComponentMember::__cordl_internal_get__IsStarred_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____IsStarred_k__BackingField;
}
constexpr void GlobalNamespace::ComponentMember::__cordl_internal_set__IsStarred_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____IsStarred_k__BackingField = value;
}
constexpr ::StringW& GlobalNamespace::ComponentMember::__cordl_internal_get__Color_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Color_k__BackingField;
}
constexpr ::StringW const& GlobalNamespace::ComponentMember::__cordl_internal_get__Color_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Color_k__BackingField;
}
constexpr void GlobalNamespace::ComponentMember::__cordl_internal_set__Color_k__BackingField(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Color_k__BackingField = value;
}
constexpr ::System::Func_1<::StringW>*& GlobalNamespace::ComponentMember::__cordl_internal_get_getValue()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___getValue;
}
constexpr ::System::Func_1<::StringW>* const& GlobalNamespace::ComponentMember::__cordl_internal_get_getValue() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___getValue;
}
constexpr void GlobalNamespace::ComponentMember::__cordl_internal_set_getValue(::System::Func_1<::StringW>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___getValue = value;
}
constexpr ::StringW& GlobalNamespace::ComponentMember::__cordl_internal_get_computedPrefix()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___computedPrefix;
}
constexpr ::StringW const& GlobalNamespace::ComponentMember::__cordl_internal_get_computedPrefix() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___computedPrefix;
}
constexpr void GlobalNamespace::ComponentMember::__cordl_internal_set_computedPrefix(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___computedPrefix = value;
}
constexpr ::StringW& GlobalNamespace::ComponentMember::__cordl_internal_get_computedSuffix()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___computedSuffix;
}
constexpr ::StringW const& GlobalNamespace::ComponentMember::__cordl_internal_get_computedSuffix() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___computedSuffix;
}
constexpr void GlobalNamespace::ComponentMember::__cordl_internal_set_computedSuffix(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___computedSuffix = value;
}
inline ::StringW GlobalNamespace::ComponentMember::get_Name()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ComponentMember*>(),
                        {"get_Name", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::ComponentMember::get_Value()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ComponentMember*>(),
                        {"get_Value", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline bool GlobalNamespace::ComponentMember::get_IsStarred()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ComponentMember*>(),
                        {"get_IsStarred", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::ComponentMember::get_Color()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ComponentMember*>(),
                        {"get_Color", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void GlobalNamespace::ComponentMember::_ctor(::StringW  name, ::System::Func_1<::StringW>*  getValue, bool  isStarred, ::StringW  color)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ComponentMember*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Func_1<::StringW>*>(), ::i2c::type_of<bool>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, name, getValue, isStarred, color);
}
inline ::GlobalNamespace::ComponentMember* GlobalNamespace::ComponentMember::New_ctor(::StringW  name, ::System::Func_1<::StringW>*  getValue, bool  isStarred, ::StringW  color)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::ComponentMember*>(name, getValue, isStarred, color));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ComponentMember::ComponentMember()   {
}
