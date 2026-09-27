#pragma once
// IWYU pragma private; include "Meta/XR/MultiplayerBlocks/Fusion/TransferOwnershipFusion.hpp"
#include "Fusion/zzzz__NetworkBehaviour_impl.hpp"
#include "Meta/XR/MultiplayerBlocks/Fusion/zzzz__TransferOwnershipFusion_def.hpp"
#include "Meta/XR/MultiplayerBlocks/Shared/zzzz__ITransferOwnership_def.hpp"
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Fusion::TransferOwnershipFusion.TransferOwnershipToLocalPlayer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MultiplayerBlocks::Fusion::TransferOwnershipFusion::*)()>(&::Meta::XR::MultiplayerBlocks::Fusion::TransferOwnershipFusion::TransferOwnershipToLocalPlayer)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x9f5d7b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Fusion::TransferOwnershipFusion*>(),
                        {"TransferOwnershipToLocalPlayer", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Fusion::TransferOwnershipFusion.HasOwnership
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Meta::XR::MultiplayerBlocks::Fusion::TransferOwnershipFusion::*)()>(&::Meta::XR::MultiplayerBlocks::Fusion::TransferOwnershipFusion::HasOwnership)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x9f5d7c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Fusion::TransferOwnershipFusion*>(),
                        {"HasOwnership", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Fusion::TransferOwnershipFusion._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MultiplayerBlocks::Fusion::TransferOwnershipFusion::*)()>(&::Meta::XR::MultiplayerBlocks::Fusion::TransferOwnershipFusion::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9f5d7e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Fusion::TransferOwnershipFusion*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Fusion::TransferOwnershipFusion.CopyBackingFieldsToState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MultiplayerBlocks::Fusion::TransferOwnershipFusion::*)(bool)>(&::Meta::XR::MultiplayerBlocks::Fusion::TransferOwnershipFusion::CopyBackingFieldsToState)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x9f5d7f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Fusion::TransferOwnershipFusion*>(),
                    {::i2c::class_of<::Meta::XR::MultiplayerBlocks::Fusion::TransferOwnershipFusion*>(), 23}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Fusion::TransferOwnershipFusion.CopyStateToBackingFields
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MultiplayerBlocks::Fusion::TransferOwnershipFusion::*)()>(&::Meta::XR::MultiplayerBlocks::Fusion::TransferOwnershipFusion::CopyStateToBackingFields)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x9f5d7f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Fusion::TransferOwnershipFusion*>(),
                    {::i2c::class_of<::Meta::XR::MultiplayerBlocks::Fusion::TransferOwnershipFusion*>(), 24}
                ));
    return ___internal_method;
  }
};
inline void Meta::XR::MultiplayerBlocks::Fusion::TransferOwnershipFusion::TransferOwnershipToLocalPlayer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Fusion::TransferOwnershipFusion*>(),
                        {"TransferOwnershipToLocalPlayer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Meta::XR::MultiplayerBlocks::Fusion::TransferOwnershipFusion::HasOwnership()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Fusion::TransferOwnershipFusion*>(),
                        {"HasOwnership", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Meta::XR::MultiplayerBlocks::Fusion::TransferOwnershipFusion::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Fusion::TransferOwnershipFusion*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::XR::MultiplayerBlocks::Fusion::TransferOwnershipFusion::CopyBackingFieldsToState(bool  _cordl_fixed_empty_name_whitespace)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::XR::MultiplayerBlocks::Fusion::TransferOwnershipFusion*>(), 23}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline void Meta::XR::MultiplayerBlocks::Fusion::TransferOwnershipFusion::CopyStateToBackingFields()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::XR::MultiplayerBlocks::Fusion::TransferOwnershipFusion*>(), 24}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Meta::XR::MultiplayerBlocks::Fusion::TransferOwnershipFusion* Meta::XR::MultiplayerBlocks::Fusion::TransferOwnershipFusion::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::XR::MultiplayerBlocks::Fusion::TransferOwnershipFusion*>());
}
/// @brief Convert operator to "::Meta::XR::MultiplayerBlocks::Shared::ITransferOwnership"
constexpr  Meta::XR::MultiplayerBlocks::Fusion::TransferOwnershipFusion::operator ::Meta::XR::MultiplayerBlocks::Shared::ITransferOwnership*() noexcept {
return static_cast<::Meta::XR::MultiplayerBlocks::Shared::ITransferOwnership*>(static_cast<void*>(this));
}
/// @brief Convert to "::Meta::XR::MultiplayerBlocks::Shared::ITransferOwnership"
constexpr ::Meta::XR::MultiplayerBlocks::Shared::ITransferOwnership* Meta::XR::MultiplayerBlocks::Fusion::TransferOwnershipFusion::i___Meta__XR__MultiplayerBlocks__Shared__ITransferOwnership() noexcept {
return static_cast<::Meta::XR::MultiplayerBlocks::Shared::ITransferOwnership*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Meta::XR::MultiplayerBlocks::Fusion::TransferOwnershipFusion::TransferOwnershipFusion()   {
}
