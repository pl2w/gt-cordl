#pragma once
// IWYU pragma private; include "Meta/Conduit/WitKeyword.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Meta/Conduit/zzzz__WitKeyword_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Meta::Conduit::WitKeyword._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::Conduit::WitKeyword::*)()>(&::Meta::Conduit::WitKeyword::_ctor)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x9e235cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Conduit::WitKeyword*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Conduit::WitKeyword._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::Conduit::WitKeyword::*)(::StringW, ::System::Collections::Generic::List_1<::StringW>*)>(&::Meta::Conduit::WitKeyword::_ctor)> {
  constexpr static std::size_t size = 0x264;
  constexpr static std::size_t addrs = 0x9e23618;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Conduit::WitKeyword*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Collections::Generic::List_1<::StringW>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Conduit::WitKeyword.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Meta::Conduit::WitKeyword::*)(::System::Object*)>(&::Meta::Conduit::WitKeyword::Equals)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x9e2387c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::Conduit::WitKeyword*>(),
                    {::i2c::class_of<::Meta::Conduit::WitKeyword*>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Conduit::WitKeyword.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Meta::Conduit::WitKeyword::*)(::Meta::Conduit::WitKeyword*)>(&::Meta::Conduit::WitKeyword::Equals)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x9e23908;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Conduit::WitKeyword*>(),
                        {"Equals", {}, {::i2c::type_of<::Meta::Conduit::WitKeyword*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Conduit::WitKeyword.GetHashCode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Meta::Conduit::WitKeyword::*)()>(&::Meta::Conduit::WitKeyword::GetHashCode)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x9e23988;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::Conduit::WitKeyword*>(),
                    {::i2c::class_of<::Meta::Conduit::WitKeyword*>(), 2}
                ));
    return ___internal_method;
  }
};
constexpr ::StringW& Meta::Conduit::WitKeyword::__cordl_internal_get_keyword()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___keyword;
}
constexpr ::StringW const& Meta::Conduit::WitKeyword::__cordl_internal_get_keyword() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___keyword;
}
constexpr void Meta::Conduit::WitKeyword::__cordl_internal_set_keyword(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___keyword = value;
}
constexpr ::System::Collections::Generic::HashSet_1<::StringW>*& Meta::Conduit::WitKeyword::__cordl_internal_get_synonyms()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___synonyms;
}
constexpr ::System::Collections::Generic::HashSet_1<::StringW>* const& Meta::Conduit::WitKeyword::__cordl_internal_get_synonyms() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___synonyms;
}
constexpr void Meta::Conduit::WitKeyword::__cordl_internal_set_synonyms(::System::Collections::Generic::HashSet_1<::StringW>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___synonyms = value;
}
inline void Meta::Conduit::WitKeyword::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Conduit::WitKeyword*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::Conduit::WitKeyword::_ctor(::StringW  keyword, ::System::Collections::Generic::List_1<::StringW>*  synonyms)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Conduit::WitKeyword*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Collections::Generic::List_1<::StringW>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, keyword, synonyms);
}
inline bool Meta::Conduit::WitKeyword::Equals(::System::Object*  obj)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::Conduit::WitKeyword*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, obj);
}
inline bool Meta::Conduit::WitKeyword::Equals(::Meta::Conduit::WitKeyword*  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Conduit::WitKeyword*>(),
                        {"Equals", {}, {::i2c::type_of<::Meta::Conduit::WitKeyword*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, other);
}
inline int32_t Meta::Conduit::WitKeyword::GetHashCode()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::Conduit::WitKeyword*>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
/// @brief [Preserve]
inline ::Meta::Conduit::WitKeyword* Meta::Conduit::WitKeyword::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::Conduit::WitKeyword*>());
}
inline ::Meta::Conduit::WitKeyword* Meta::Conduit::WitKeyword::New_ctor(::StringW  keyword, ::System::Collections::Generic::List_1<::StringW>*  synonyms)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::Conduit::WitKeyword*>(keyword, synonyms));
}
// Ctor Parameters []
constexpr ::Meta::Conduit::WitKeyword::WitKeyword()   {
}
