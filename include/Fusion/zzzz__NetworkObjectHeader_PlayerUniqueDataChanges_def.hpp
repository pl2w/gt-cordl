#pragma once
// IWYU pragma private; include "Fusion/NetworkObjectHeader_PlayerUniqueDataChanges.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Fusion/zzzz__NetworkObjectHeader_PlayerUniqueDataChanges__Changes_e__FixedBuffer_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(NetworkObjectHeader_PlayerUniqueDataChanges)
namespace GlobalNamespace {
struct PlayerUniqueDataChanges_NetworkObjectHeader__Changes_e__FixedBuffer;
}
// Forward declare root types
namespace GlobalNamespace {
struct NetworkObjectHeader_PlayerUniqueDataChanges;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::NetworkObjectHeader_PlayerUniqueDataChanges);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::NetworkObjectHeader_PlayerUniqueDataChanges, "Fusion", "NetworkObjectHeader/PlayerUniqueDataChanges");
// Dependencies Fusion.NetworkObjectHeader::PlayerUniqueDataChanges::<Changes>e__FixedBuffer
namespace GlobalNamespace {
// Is value type: true
// CS Name: Fusion.NetworkObjectHeader/PlayerUniqueDataChanges
struct CORDL_TYPE NetworkObjectHeader_PlayerUniqueDataChanges {
public:
// Declarations
using _Changes_e__FixedBuffer = ::GlobalNamespace::PlayerUniqueDataChanges_NetworkObjectHeader__Changes_e__FixedBuffer;

/// @brief Field Changes, offset 0x0, size 0x4 
 __declspec(property(get=__cordl_internal_get_Changes, put=__cordl_internal_set_Changes)) ::GlobalNamespace::PlayerUniqueDataChanges_NetworkObjectHeader__Changes_e__FixedBuffer  Changes;

 __declspec(property(get=get_MaxTick)) int32_t  MaxTick;

constexpr ::GlobalNamespace::PlayerUniqueDataChanges_NetworkObjectHeader__Changes_e__FixedBuffer const& __cordl_internal_get_Changes() const;

constexpr ::GlobalNamespace::PlayerUniqueDataChanges_NetworkObjectHeader__Changes_e__FixedBuffer& __cordl_internal_get_Changes() ;

constexpr void __cordl_internal_set_Changes(::GlobalNamespace::PlayerUniqueDataChanges_NetworkObjectHeader__Changes_e__FixedBuffer  value) ;

/// @brief Method get_MaxTick, addr 0x5fabdc0, size 0x8, virtual false, abstract: false, final false
inline int32_t get_MaxTick() ;

// Ctor Parameters []
// @brief default ctor
constexpr NetworkObjectHeader_PlayerUniqueDataChanges() ;

// Ctor Parameters [CppParam { name: "Changes", ty: "::GlobalNamespace::PlayerUniqueDataChanges_NetworkObjectHeader__Changes_e__FixedBuffer", modifiers: "", def_value: None, comment: None }]
constexpr NetworkObjectHeader_PlayerUniqueDataChanges(::GlobalNamespace::PlayerUniqueDataChanges_NetworkObjectHeader__Changes_e__FixedBuffer  Changes) noexcept;

private:
/// @brief Explicitly laid out type with union based offsets
union {
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x0
 uint8_t  ___Changes_padding[0x0];
/// [FixedBuffer(typeof(System.Int32), 1)]
/// @brief Field Changes, offset: 0x0, size: 0x4, def value: None
 ::GlobalNamespace::PlayerUniqueDataChanges_NetworkObjectHeader__Changes_e__FixedBuffer  ___Changes;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x0 for alignment
 uint8_t  ___Changes_padding_forAlignment[0x0];
/// [FixedBuffer(typeof(System.Int32), 1)]
/// @brief Field Changes, offset: 0x0, size: 0x4, def value: None
 ::GlobalNamespace::PlayerUniqueDataChanges_NetworkObjectHeader__Changes_e__FixedBuffer  ___Changes_forAlignment;
};
};
public:

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19141};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::NetworkObjectHeader_PlayerUniqueDataChanges) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
