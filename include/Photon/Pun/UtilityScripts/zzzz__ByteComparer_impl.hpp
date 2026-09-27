#pragma once
// IWYU pragma private; include "Photon/Pun/UtilityScripts/ByteComparer.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Photon/Pun/UtilityScripts/zzzz__ByteComparer_def.hpp"
#include "System/Collections/Generic/zzzz__IComparer_1_def.hpp"
//  Writing Method size for method: ::Photon::Pun::UtilityScripts::ByteComparer.Compare
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Photon::Pun::UtilityScripts::ByteComparer::*)(uint8_t, uint8_t)>(&::Photon::Pun::UtilityScripts::ByteComparer::Compare)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xa72fde8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::UtilityScripts::ByteComparer*>(),
                        {"Compare", {}, {::i2c::type_of<uint8_t>(), ::i2c::type_of<uint8_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::UtilityScripts::ByteComparer._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Pun::UtilityScripts::ByteComparer::*)()>(&::Photon::Pun::UtilityScripts::ByteComparer::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa72fba8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::UtilityScripts::ByteComparer*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline int32_t Photon::Pun::UtilityScripts::ByteComparer::Compare(uint8_t  x, uint8_t  y)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::UtilityScripts::ByteComparer*>(),
                        {"Compare", {}, {::i2c::type_of<uint8_t>(), ::i2c::type_of<uint8_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, x, y);
}
inline void Photon::Pun::UtilityScripts::ByteComparer::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::UtilityScripts::ByteComparer*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Photon::Pun::UtilityScripts::ByteComparer* Photon::Pun::UtilityScripts::ByteComparer::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Photon::Pun::UtilityScripts::ByteComparer*>());
}
/// @brief Convert operator to "::System::Collections::Generic::IComparer_1<uint8_t>"
constexpr  Photon::Pun::UtilityScripts::ByteComparer::operator ::System::Collections::Generic::IComparer_1<uint8_t>*() noexcept {
return static_cast<::System::Collections::Generic::IComparer_1<uint8_t>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IComparer_1<uint8_t>"
constexpr ::System::Collections::Generic::IComparer_1<uint8_t>* Photon::Pun::UtilityScripts::ByteComparer::i___System__Collections__Generic__IComparer_1_uint8_t_() noexcept {
return static_cast<::System::Collections::Generic::IComparer_1<uint8_t>*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Photon::Pun::UtilityScripts::ByteComparer::ByteComparer()   {
}
