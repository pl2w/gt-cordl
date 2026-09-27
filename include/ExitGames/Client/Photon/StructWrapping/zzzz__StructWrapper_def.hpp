#pragma once
// IWYU pragma private; include "ExitGames/Client/Photon/StructWrapping/StructWrapper.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "ExitGames/Client/Photon/StructWrapping/zzzz__WrappedType_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(StructWrapper)
namespace ExitGames::Client::Photon::StructWrapping {
struct WrappedType;
}
namespace System {
class IDisposable;
}
namespace System {
class Type;
}
// Forward declare root types
namespace ExitGames::Client::Photon::StructWrapping {
class StructWrapper;
}
// Write type traits
MARK_REF_T(::ExitGames::Client::Photon::StructWrapping::StructWrapper*);
DEFINE_IL2CPP_CLASS(::ExitGames::Client::Photon::StructWrapping::StructWrapper*, "ExitGames.Client.Photon.StructWrapping", "StructWrapper");
// Dependencies ExitGames.Client.Photon.StructWrapping.WrappedType, System.Object
namespace ExitGames::Client::Photon::StructWrapping {
// Is value type: false
// CS Name: ExitGames.Client.Photon.StructWrapping.StructWrapper
class CORDL_TYPE StructWrapper : public ::System::Object {
public:
// Declarations
/// @brief Field ttype, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_ttype, put=__cordl_internal_set_ttype)) ::System::Type*  ttype;

/// @brief Field wrappedType, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_wrappedType, put=__cordl_internal_set_wrappedType)) ::ExitGames::Client::Photon::StructWrapping::WrappedType  wrappedType;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method Dispose, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void Dispose() ;

static inline ::ExitGames::Client::Photon::StructWrapping::StructWrapper* New_ctor(::System::Type*  ttype, ::ExitGames::Client::Photon::StructWrapping::WrappedType  wrappedType) ;

/// @brief Method ToString, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::StringW ToString(bool  writeType) ;

constexpr ::System::Type* const& __cordl_internal_get_ttype() const;

constexpr ::System::Type*& __cordl_internal_get_ttype() ;

constexpr ::ExitGames::Client::Photon::StructWrapping::WrappedType const& __cordl_internal_get_wrappedType() const;

constexpr ::ExitGames::Client::Photon::StructWrapping::WrappedType& __cordl_internal_get_wrappedType() ;

constexpr void __cordl_internal_set_ttype(::System::Type*  value) ;

constexpr void __cordl_internal_set_wrappedType(::ExitGames::Client::Photon::StructWrapping::WrappedType  value) ;

/// @brief Method .ctor, addr 0xa6eeec4, size 0x3c, virtual false, abstract: false, final false
inline void _ctor(::System::Type*  ttype, ::ExitGames::Client::Photon::StructWrapping::WrappedType  wrappedType) ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr StructWrapper() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "StructWrapper", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
StructWrapper(StructWrapper && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "StructWrapper", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
StructWrapper(StructWrapper const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{26491};

/// @brief Field wrappedType, offset: 0x10, size: 0x4, def value: None
 ::ExitGames::Client::Photon::StructWrapping::WrappedType  ___wrappedType;

/// @brief Field ttype, offset: 0x18, size: 0x8, def value: None
 ::System::Type*  ___ttype;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::ExitGames::Client::Photon::StructWrapping::StructWrapper, ___wrappedType) == 0x10, "Offset mismatch!");

static_assert(offsetof(::ExitGames::Client::Photon::StructWrapping::StructWrapper, ___ttype) == 0x18, "Offset mismatch!");

static_assert(sizeof(::ExitGames::Client::Photon::StructWrapping::StructWrapper) == 0x20, "Size mismatch!");

} // namespace end def ExitGames::Client::Photon::StructWrapping
