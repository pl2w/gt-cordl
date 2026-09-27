#pragma once
// IWYU pragma private; include "GlobalNamespace/BuilderArmShelf.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__BuilderArmShelf_def.hpp"
#include "GlobalNamespace/zzzz__BuilderPiece_def.hpp"
#include "GlobalNamespace/zzzz__VRRig_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::BuilderArmShelf.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BuilderArmShelf::*)()>(&::GlobalNamespace::BuilderArmShelf::Start)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x57b5920;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderArmShelf*>(),
                        {"Start", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BuilderArmShelf.IsOwnedLocally
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::BuilderArmShelf::*)()>(&::GlobalNamespace::BuilderArmShelf::IsOwnedLocally)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x57b5978;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderArmShelf*>(),
                        {"IsOwnedLocally", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BuilderArmShelf.CanAttachToArmPiece
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::BuilderArmShelf::*)()>(&::GlobalNamespace::BuilderArmShelf::CanAttachToArmPiece)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x57b5a00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderArmShelf*>(),
                        {"CanAttachToArmPiece", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BuilderArmShelf.DropAttachedPieces
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BuilderArmShelf::*)()>(&::GlobalNamespace::BuilderArmShelf::DropAttachedPieces)> {
  constexpr static std::size_t size = 0x3b4;
  constexpr static std::size_t addrs = 0x57b5a90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderArmShelf*>(),
                        {"DropAttachedPieces", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BuilderArmShelf._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BuilderArmShelf::*)()>(&::GlobalNamespace::BuilderArmShelf::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x57b5e44;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderArmShelf*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::BuilderPiece>& GlobalNamespace::BuilderArmShelf::__cordl_internal_get_piece()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___piece;
}
constexpr ::UnityW<::GlobalNamespace::BuilderPiece> const& GlobalNamespace::BuilderArmShelf::__cordl_internal_get_piece() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___piece;
}
constexpr void GlobalNamespace::BuilderArmShelf::__cordl_internal_set_piece(::UnityW<::GlobalNamespace::BuilderPiece>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___piece = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::BuilderArmShelf::__cordl_internal_get_pieceAnchor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pieceAnchor;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::BuilderArmShelf::__cordl_internal_get_pieceAnchor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pieceAnchor;
}
constexpr void GlobalNamespace::BuilderArmShelf::__cordl_internal_set_pieceAnchor(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___pieceAnchor = value;
}
constexpr ::UnityW<::GlobalNamespace::VRRig>& GlobalNamespace::BuilderArmShelf::__cordl_internal_get_ownerRig()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ownerRig;
}
constexpr ::UnityW<::GlobalNamespace::VRRig> const& GlobalNamespace::BuilderArmShelf::__cordl_internal_get_ownerRig() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ownerRig;
}
constexpr void GlobalNamespace::BuilderArmShelf::__cordl_internal_set_ownerRig(::UnityW<::GlobalNamespace::VRRig>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ownerRig = value;
}
inline void GlobalNamespace::BuilderArmShelf::Start()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderArmShelf*>(),
                        {"Start", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::BuilderArmShelf::IsOwnedLocally()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderArmShelf*>(),
                        {"IsOwnedLocally", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool GlobalNamespace::BuilderArmShelf::CanAttachToArmPiece()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderArmShelf*>(),
                        {"CanAttachToArmPiece", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::BuilderArmShelf::DropAttachedPieces()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderArmShelf*>(),
                        {"DropAttachedPieces", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::BuilderArmShelf::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderArmShelf*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::BuilderArmShelf* GlobalNamespace::BuilderArmShelf::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::BuilderArmShelf*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BuilderArmShelf::BuilderArmShelf()   {
}
