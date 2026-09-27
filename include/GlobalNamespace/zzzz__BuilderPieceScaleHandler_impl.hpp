#pragma once
// IWYU pragma private; include "GlobalNamespace/BuilderPieceScaleHandler.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__BuilderPieceScaleHandler_def.hpp"
#include "GlobalNamespace/zzzz__BuilderPiece_def.hpp"
#include "GlobalNamespace/zzzz__IBuilderPieceComponent_def.hpp"
#include "GorillaTagScripts/Builder/zzzz__BuilderScaleAudioRadius_def.hpp"
#include "GorillaTagScripts/Builder/zzzz__BuilderScaleParticles_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::BuilderPieceScaleHandler.OnPieceCreate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BuilderPieceScaleHandler::*)(int32_t, int32_t)>(&::GlobalNamespace::BuilderPieceScaleHandler::OnPieceCreate)> {
  constexpr static std::size_t size = 0x268;
  constexpr static std::size_t addrs = 0x57b35b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderPieceScaleHandler*>(),
                        {"OnPieceCreate", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BuilderPieceScaleHandler.OnPieceDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BuilderPieceScaleHandler::*)()>(&::GlobalNamespace::BuilderPieceScaleHandler::OnPieceDestroy)> {
  constexpr static std::size_t size = 0x240;
  constexpr static std::size_t addrs = 0x57b3818;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderPieceScaleHandler*>(),
                        {"OnPieceDestroy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BuilderPieceScaleHandler.OnPiecePlacementDeserialized
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BuilderPieceScaleHandler::*)()>(&::GlobalNamespace::BuilderPieceScaleHandler::OnPiecePlacementDeserialized)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x57b3a58;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderPieceScaleHandler*>(),
                        {"OnPiecePlacementDeserialized", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BuilderPieceScaleHandler.OnPieceActivate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BuilderPieceScaleHandler::*)()>(&::GlobalNamespace::BuilderPieceScaleHandler::OnPieceActivate)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x57b3a5c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderPieceScaleHandler*>(),
                        {"OnPieceActivate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BuilderPieceScaleHandler.OnPieceDeactivate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BuilderPieceScaleHandler::*)()>(&::GlobalNamespace::BuilderPieceScaleHandler::OnPieceDeactivate)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x57b3a60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderPieceScaleHandler*>(),
                        {"OnPieceDeactivate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BuilderPieceScaleHandler._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BuilderPieceScaleHandler::*)()>(&::GlobalNamespace::BuilderPieceScaleHandler::_ctor)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x57b3a64;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderPieceScaleHandler*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::BuilderPiece>& GlobalNamespace::BuilderPieceScaleHandler::__cordl_internal_get_myPiece()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___myPiece;
}
constexpr ::UnityW<::GlobalNamespace::BuilderPiece> const& GlobalNamespace::BuilderPieceScaleHandler::__cordl_internal_get_myPiece() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___myPiece;
}
constexpr void GlobalNamespace::BuilderPieceScaleHandler::__cordl_internal_set_myPiece(::UnityW<::GlobalNamespace::BuilderPiece>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___myPiece = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GorillaTagScripts::Builder::BuilderScaleAudioRadius>>*& GlobalNamespace::BuilderPieceScaleHandler::__cordl_internal_get_audioScalers()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___audioScalers;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GorillaTagScripts::Builder::BuilderScaleAudioRadius>>* const& GlobalNamespace::BuilderPieceScaleHandler::__cordl_internal_get_audioScalers() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___audioScalers;
}
constexpr void GlobalNamespace::BuilderPieceScaleHandler::__cordl_internal_set_audioScalers(::System::Collections::Generic::List_1<::UnityW<::GorillaTagScripts::Builder::BuilderScaleAudioRadius>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___audioScalers = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GorillaTagScripts::Builder::BuilderScaleParticles>>*& GlobalNamespace::BuilderPieceScaleHandler::__cordl_internal_get_particleScalers()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___particleScalers;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GorillaTagScripts::Builder::BuilderScaleParticles>>* const& GlobalNamespace::BuilderPieceScaleHandler::__cordl_internal_get_particleScalers() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___particleScalers;
}
constexpr void GlobalNamespace::BuilderPieceScaleHandler::__cordl_internal_set_particleScalers(::System::Collections::Generic::List_1<::UnityW<::GorillaTagScripts::Builder::BuilderScaleParticles>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___particleScalers = value;
}
inline void GlobalNamespace::BuilderPieceScaleHandler::OnPieceCreate(int32_t  pieceType, int32_t  pieceId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderPieceScaleHandler*>(),
                        {"OnPieceCreate", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pieceType, pieceId);
}
inline void GlobalNamespace::BuilderPieceScaleHandler::OnPieceDestroy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderPieceScaleHandler*>(),
                        {"OnPieceDestroy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::BuilderPieceScaleHandler::OnPiecePlacementDeserialized()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderPieceScaleHandler*>(),
                        {"OnPiecePlacementDeserialized", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::BuilderPieceScaleHandler::OnPieceActivate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderPieceScaleHandler*>(),
                        {"OnPieceActivate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::BuilderPieceScaleHandler::OnPieceDeactivate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderPieceScaleHandler*>(),
                        {"OnPieceDeactivate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::BuilderPieceScaleHandler::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderPieceScaleHandler*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::BuilderPieceScaleHandler* GlobalNamespace::BuilderPieceScaleHandler::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::BuilderPieceScaleHandler*>());
}
/// @brief Convert operator to "::GlobalNamespace::IBuilderPieceComponent"
constexpr  GlobalNamespace::BuilderPieceScaleHandler::operator ::GlobalNamespace::IBuilderPieceComponent*() noexcept {
return static_cast<::GlobalNamespace::IBuilderPieceComponent*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IBuilderPieceComponent"
constexpr ::GlobalNamespace::IBuilderPieceComponent* GlobalNamespace::BuilderPieceScaleHandler::i___GlobalNamespace__IBuilderPieceComponent() noexcept {
return static_cast<::GlobalNamespace::IBuilderPieceComponent*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BuilderPieceScaleHandler::BuilderPieceScaleHandler()   {
}
