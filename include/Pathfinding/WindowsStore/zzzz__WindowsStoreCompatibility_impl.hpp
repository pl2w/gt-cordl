#pragma once
// IWYU pragma private; include "Pathfinding/WindowsStore/WindowsStoreCompatibility.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Pathfinding/WindowsStore/zzzz__WindowsStoreCompatibility_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::Pathfinding::WindowsStore::WindowsStoreCompatibility.GetTypeFromInfo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Type* (*)(::System::Type*)>(&::Pathfinding::WindowsStore::WindowsStoreCompatibility::GetTypeFromInfo)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5ed5410;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::WindowsStore::WindowsStoreCompatibility*>(),
                        {"GetTypeFromInfo", {}, {::i2c::type_of<::System::Type*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::WindowsStore::WindowsStoreCompatibility.GetTypeInfo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Type* (*)(::System::Type*)>(&::Pathfinding::WindowsStore::WindowsStoreCompatibility::GetTypeInfo)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5ed2e38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::WindowsStore::WindowsStoreCompatibility*>(),
                        {"GetTypeInfo", {}, {::i2c::type_of<::System::Type*>()}}
                    )));
    return ___internal_method;
  }
};
inline ::System::Type* Pathfinding::WindowsStore::WindowsStoreCompatibility::GetTypeFromInfo(::System::Type*  type)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::WindowsStore::WindowsStoreCompatibility*>(),
                        {"GetTypeFromInfo", {}, {::i2c::type_of<::System::Type*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Type*>(nullptr, ___internal_method, type);
}
inline ::System::Type* Pathfinding::WindowsStore::WindowsStoreCompatibility::GetTypeInfo(::System::Type*  type)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::WindowsStore::WindowsStoreCompatibility*>(),
                        {"GetTypeInfo", {}, {::i2c::type_of<::System::Type*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Type*>(nullptr, ___internal_method, type);
}
// Ctor Parameters []
constexpr ::Pathfinding::WindowsStore::WindowsStoreCompatibility::WindowsStoreCompatibility()   {
}
