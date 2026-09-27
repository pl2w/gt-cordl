#pragma once
// IWYU pragma private; include "GorillaNetworking/CreditsSection.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GorillaNetworking/zzzz__CreditsSection_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::GorillaNetworking::CreditsSection.get_Title
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GorillaNetworking::CreditsSection::*)()>(&::GorillaNetworking::CreditsSection::get_Title)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c725c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CreditsSection*>(),
                        {"get_Title", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::CreditsSection.set_Title
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::CreditsSection::*)(::StringW)>(&::GorillaNetworking::CreditsSection::set_Title)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c725cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CreditsSection*>(),
                        {"set_Title", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::CreditsSection.get_Entries
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::StringW>* (::GorillaNetworking::CreditsSection::*)()>(&::GorillaNetworking::CreditsSection::get_Entries)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c725d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CreditsSection*>(),
                        {"get_Entries", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::CreditsSection.set_Entries
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::CreditsSection::*)(::System::Collections::Generic::List_1<::StringW>*)>(&::GorillaNetworking::CreditsSection::set_Entries)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c725dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CreditsSection*>(),
                        {"set_Entries", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::StringW>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::CreditsSection._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::CreditsSection::*)()>(&::GorillaNetworking::CreditsSection::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c725e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CreditsSection*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& GorillaNetworking::CreditsSection::__cordl_internal_get__Title_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Title_k__BackingField;
}
constexpr ::StringW const& GorillaNetworking::CreditsSection::__cordl_internal_get__Title_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Title_k__BackingField;
}
constexpr void GorillaNetworking::CreditsSection::__cordl_internal_set__Title_k__BackingField(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Title_k__BackingField = value;
}
constexpr ::System::Collections::Generic::List_1<::StringW>*& GorillaNetworking::CreditsSection::__cordl_internal_get__Entries_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Entries_k__BackingField;
}
constexpr ::System::Collections::Generic::List_1<::StringW>* const& GorillaNetworking::CreditsSection::__cordl_internal_get__Entries_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Entries_k__BackingField;
}
constexpr void GorillaNetworking::CreditsSection::__cordl_internal_set__Entries_k__BackingField(::System::Collections::Generic::List_1<::StringW>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Entries_k__BackingField = value;
}
inline ::StringW GorillaNetworking::CreditsSection::get_Title()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CreditsSection*>(),
                        {"get_Title", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void GorillaNetworking::CreditsSection::set_Title(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CreditsSection*>(),
                        {"set_Title", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Collections::Generic::List_1<::StringW>* GorillaNetworking::CreditsSection::get_Entries()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CreditsSection*>(),
                        {"get_Entries", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::StringW>*>(this, ___internal_method);
}
inline void GorillaNetworking::CreditsSection::set_Entries(::System::Collections::Generic::List_1<::StringW>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CreditsSection*>(),
                        {"set_Entries", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::StringW>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GorillaNetworking::CreditsSection::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CreditsSection*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GorillaNetworking::CreditsSection* GorillaNetworking::CreditsSection::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaNetworking::CreditsSection*>());
}
// Ctor Parameters []
constexpr ::GorillaNetworking::CreditsSection::CreditsSection()   {
}
