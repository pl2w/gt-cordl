#pragma once
// IWYU pragma private; include "GorillaTag/StringList.hpp"
#include "UnityEngine/zzzz__ScriptableObject_impl.hpp"
#include "GorillaTag/zzzz__StringList_def.hpp"
//  Writing Method size for method: ::GorillaTag::StringList.get_Strings
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::StringW> (::GorillaTag::StringList::*)()>(&::GorillaTag::StringList::get_Strings)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d295b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::StringList*>(),
                        {"get_Strings", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::StringList._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::StringList::*)()>(&::GorillaTag::StringList::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d295c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::StringList*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::StringW>& GorillaTag::StringList::__cordl_internal_get_strings()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___strings;
}
constexpr ::ArrayW<::StringW> const& GorillaTag::StringList::__cordl_internal_get_strings() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___strings;
}
constexpr void GorillaTag::StringList::__cordl_internal_set_strings(::ArrayW<::StringW>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___strings = value;
}
inline ::ArrayW<::StringW> GorillaTag::StringList::get_Strings()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::StringList*>(),
                        {"get_Strings", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::StringW>>(this, ___internal_method);
}
inline void GorillaTag::StringList::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::StringList*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GorillaTag::StringList* GorillaTag::StringList::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaTag::StringList*>());
}
// Ctor Parameters []
constexpr ::GorillaTag::StringList::StringList()   {
}
