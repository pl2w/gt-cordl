#pragma once
// IWYU pragma private; include "GorillaExtensions/CollectionExtensions.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GorillaExtensions/zzzz__CollectionExtensions_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
#include "System/Collections/Generic/zzzz__ICollection_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
//  Writing Method size for method: ::GorillaExtensions::CollectionExtensions.CopyStringKeepDelimiterAtEnd
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Collections::Generic::HashSet_1<::StringW>*, ::StringW, char16_t)>(&::GorillaExtensions::CollectionExtensions::CopyStringKeepDelimiterAtEnd)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x5cf4acc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::CollectionExtensions*>(),
                        {"CopyStringKeepDelimiterAtEnd", {}, {::i2c::type_of<::System::Collections::Generic::HashSet_1<::StringW>*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<char16_t>()}}
                    )));
    return ___internal_method;
  }
};
template<typename T>
inline void GorillaExtensions::CollectionExtensions::AddAll(::System::Collections::Generic::ICollection_1<T>*  collection, ::System::Collections::Generic::IEnumerable_1<T>*  ts)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::GorillaExtensions::CollectionExtensions*>(),
                    {"AddAll", {::i2c::class_of<T>()}, {::i2c::type_of<::System::Collections::Generic::ICollection_1<T>*>(), ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<T>*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, collection, ts);
}
inline void GorillaExtensions::CollectionExtensions::CopyStringKeepDelimiterAtEnd(::System::Collections::Generic::HashSet_1<::StringW>*  hash, ::StringW  str, char16_t  delimiter)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::CollectionExtensions*>(),
                        {"CopyStringKeepDelimiterAtEnd", {}, {::i2c::type_of<::System::Collections::Generic::HashSet_1<::StringW>*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<char16_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, hash, str, delimiter);
}
template<typename T>
inline bool GorillaExtensions::CollectionExtensions::ContainsAll(::System::Collections::Generic::ICollection_1<T>*  collection, ::System::Collections::Generic::IEnumerable_1<T>*  ts)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::GorillaExtensions::CollectionExtensions*>(),
                    {"ContainsAll", {::i2c::class_of<T>()}, {::i2c::type_of<::System::Collections::Generic::ICollection_1<T>*>(), ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<T>*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, collection, ts);
}
// Ctor Parameters []
constexpr ::GorillaExtensions::CollectionExtensions::CollectionExtensions()   {
}
