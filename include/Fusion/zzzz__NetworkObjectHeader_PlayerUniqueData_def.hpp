#pragma once
// IWYU pragma private; include "Fusion/NetworkObjectHeader_PlayerUniqueData.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Fusion/zzzz__NetworkObjectHeaderPlayerDataFlags_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(NetworkObjectHeader_PlayerUniqueData)
namespace Fusion {
struct NetworkObjectHeaderPlayerDataFlags;
}
// Forward declare root types
namespace GlobalNamespace {
struct NetworkObjectHeader_PlayerUniqueData;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::NetworkObjectHeader_PlayerUniqueData);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::NetworkObjectHeader_PlayerUniqueData, "Fusion", "NetworkObjectHeader/PlayerUniqueData");
// Dependencies Fusion.NetworkObjectHeaderPlayerDataFlags
namespace GlobalNamespace {
// Is value type: true
// CS Name: Fusion.NetworkObjectHeader/PlayerUniqueData
struct CORDL_TYPE NetworkObjectHeader_PlayerUniqueData {
public:
// Declarations
/// @brief Field Flags, offset 0x0, size 0x4 
 __declspec(property(get=__cordl_internal_get_Flags, put=__cordl_internal_set_Flags)) ::Fusion::NetworkObjectHeaderPlayerDataFlags  Flags;

/// @brief Method ClearFlag, addr 0x5fabdb0, size 0x10, virtual false, abstract: false, final false
inline void ClearFlag(::Fusion::NetworkObjectHeaderPlayerDataFlags  flag) ;

/// @brief Method HasFlag, addr 0x5fabd90, size 0x10, virtual false, abstract: false, final false
inline bool HasFlag(::Fusion::NetworkObjectHeaderPlayerDataFlags  flag) ;

/// @brief Method SetFlag, addr 0x5fabda0, size 0x10, virtual false, abstract: false, final false
inline void SetFlag(::Fusion::NetworkObjectHeaderPlayerDataFlags  flag) ;

constexpr ::Fusion::NetworkObjectHeaderPlayerDataFlags const& __cordl_internal_get_Flags() const;

constexpr ::Fusion::NetworkObjectHeaderPlayerDataFlags& __cordl_internal_get_Flags() ;

constexpr void __cordl_internal_set_Flags(::Fusion::NetworkObjectHeaderPlayerDataFlags  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr NetworkObjectHeader_PlayerUniqueData() ;

// Ctor Parameters [CppParam { name: "Flags", ty: "::Fusion::NetworkObjectHeaderPlayerDataFlags", modifiers: "", def_value: None, comment: None }]
constexpr NetworkObjectHeader_PlayerUniqueData(::Fusion::NetworkObjectHeaderPlayerDataFlags  Flags) noexcept;

private:
/// @brief Explicitly laid out type with union based offsets
union {
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x0
 uint8_t  ___Flags_padding[0x0];
/// @brief Field Flags, offset: 0x0, size: 0x4, def value: None
 ::Fusion::NetworkObjectHeaderPlayerDataFlags  ___Flags;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x0 for alignment
 uint8_t  ___Flags_padding_forAlignment[0x0];
/// @brief Field Flags, offset: 0x0, size: 0x4, def value: None
 ::Fusion::NetworkObjectHeaderPlayerDataFlags  ___Flags_forAlignment;
};
};
public:

/// @brief Field FLAGS_WORD_INDEX offset 0xffffffff size 0x4
static constexpr int32_t  FLAGS_WORD_INDEX{static_cast<int32_t>(0x0)};

/// @brief Field SIZE offset 0xffffffff size 0x4
static constexpr int32_t  SIZE{static_cast<int32_t>(0x4)};

/// @brief Field WORDS offset 0xffffffff size 0x4
static constexpr int32_t  WORDS{static_cast<int32_t>(0x1)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19139};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::NetworkObjectHeader_PlayerUniqueData) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
