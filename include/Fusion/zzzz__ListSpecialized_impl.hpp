#pragma once
// IWYU pragma private; include "Fusion/ListSpecialized.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Fusion/zzzz__ListSpecialized_def.hpp"
#include "Fusion/zzzz__NetworkId_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::Fusion::ListSpecialized.BinarySearchSpecialized
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::Collections::Generic::List_1<::Fusion::NetworkId>*, ::Fusion::NetworkId)>(&::Fusion::ListSpecialized::BinarySearchSpecialized)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x5fa06e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::ListSpecialized*>(),
                        {"BinarySearchSpecialized", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::Fusion::NetworkId>*>(), ::i2c::type_of<::Fusion::NetworkId>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::ListSpecialized.AddUnique
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Collections::Generic::List_1<::Fusion::NetworkId>*, ::Fusion::NetworkId)>(&::Fusion::ListSpecialized::AddUnique)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x5fa07a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::ListSpecialized*>(),
                        {"AddUnique", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::Fusion::NetworkId>*>(), ::i2c::type_of<::Fusion::NetworkId>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::ListSpecialized.RemoveUnique
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Collections::Generic::List_1<::Fusion::NetworkId>*, ::Fusion::NetworkId)>(&::Fusion::ListSpecialized::RemoveUnique)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x5fa081c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::ListSpecialized*>(),
                        {"RemoveUnique", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::Fusion::NetworkId>*>(), ::i2c::type_of<::Fusion::NetworkId>()}}
                    )));
    return ___internal_method;
  }
};
inline int32_t Fusion::ListSpecialized::BinarySearchSpecialized(::System::Collections::Generic::List_1<::Fusion::NetworkId>*  list, ::Fusion::NetworkId  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::ListSpecialized*>(),
                        {"BinarySearchSpecialized", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::Fusion::NetworkId>*>(), ::i2c::type_of<::Fusion::NetworkId>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, list, value);
}
inline bool Fusion::ListSpecialized::AddUnique(::System::Collections::Generic::List_1<::Fusion::NetworkId>*  list, ::Fusion::NetworkId  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::ListSpecialized*>(),
                        {"AddUnique", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::Fusion::NetworkId>*>(), ::i2c::type_of<::Fusion::NetworkId>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, list, value);
}
inline bool Fusion::ListSpecialized::RemoveUnique(::System::Collections::Generic::List_1<::Fusion::NetworkId>*  list, ::Fusion::NetworkId  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::ListSpecialized*>(),
                        {"RemoveUnique", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::Fusion::NetworkId>*>(), ::i2c::type_of<::Fusion::NetworkId>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, list, value);
}
// Ctor Parameters []
constexpr ::Fusion::ListSpecialized::ListSpecialized()   {
}
