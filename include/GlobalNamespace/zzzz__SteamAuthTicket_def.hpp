#pragma once
// IWYU pragma private; include "GlobalNamespace/SteamAuthTicket.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Steamworks/zzzz__HAuthTicket_def.hpp"
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(SteamAuthTicket)
namespace Steamworks {
struct HAuthTicket;
}
namespace System {
class IDisposable;
}
// Forward declare root types
namespace GlobalNamespace {
class SteamAuthTicket;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::SteamAuthTicket*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::SteamAuthTicket*, "", "SteamAuthTicket");
// Dependencies Steamworks.HAuthTicket, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: SteamAuthTicket
class CORDL_TYPE SteamAuthTicket : public ::System::Object {
public:
// Declarations
/// @brief Field m_hAuthTicket, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_hAuthTicket, put=__cordl_internal_set_m_hAuthTicket)) ::Steamworks::HAuthTicket  m_hAuthTicket;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method Dispose, addr 0x5ab26b4, size 0x168, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method Finalize, addr 0x5ab2630, size 0x84, virtual true, abstract: false, final false
inline void Finalize() ;

static inline ::GlobalNamespace::SteamAuthTicket* New_ctor(::Steamworks::HAuthTicket  hAuthTicket) ;

constexpr ::Steamworks::HAuthTicket const& __cordl_internal_get_m_hAuthTicket() const;

constexpr ::Steamworks::HAuthTicket& __cordl_internal_get_m_hAuthTicket() ;

constexpr void __cordl_internal_set_m_hAuthTicket(::Steamworks::HAuthTicket  value) ;

/// @brief Method .ctor, addr 0x5ab25ac, size 0x28, virtual false, abstract: false, final false
inline void _ctor(::Steamworks::HAuthTicket  hAuthTicket) ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

/// @brief Method op_Implicit, addr 0x5ab25d4, size 0x5c, virtual false, abstract: false, final false
static inline ::GlobalNamespace::SteamAuthTicket* op_Implicit___GlobalNamespace__SteamAuthTicket_(::Steamworks::HAuthTicket  hAuthTicket) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SteamAuthTicket() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SteamAuthTicket", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SteamAuthTicket(SteamAuthTicket && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SteamAuthTicket", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SteamAuthTicket(SteamAuthTicket const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3296};

/// @brief Field m_hAuthTicket, offset: 0x10, size: 0x4, def value: None
 ::Steamworks::HAuthTicket  ___m_hAuthTicket;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SteamAuthTicket, ___m_hAuthTicket) == 0x10, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::SteamAuthTicket) == 0x18, "Size mismatch!");

} // namespace end def GlobalNamespace
