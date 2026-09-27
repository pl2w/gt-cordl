#pragma once
// IWYU pragma private; include "GlobalNamespace/HitTargetStruct.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(HitTargetStruct)
namespace Fusion {
class INetworkStruct;
}
// Forward declare root types
namespace GlobalNamespace {
struct HitTargetStruct;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::HitTargetStruct);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::HitTargetStruct, "", "HitTargetStruct");
// [NetworkStructWeaved(1)]
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: HitTargetStruct
#pragma pack(push, 0)
struct CORDL_TYPE HitTargetStruct {
public:
// Declarations
/// @brief Field Score, offset 0x0, size 0x4 
 __declspec(property(get=__cordl_internal_get_Score, put=__cordl_internal_set_Score)) int32_t  Score;

/// @brief Convert operator to "::Fusion::INetworkStruct"
constexpr operator  ::Fusion::INetworkStruct*() ;

constexpr int32_t const& __cordl_internal_get_Score() const;

constexpr int32_t& __cordl_internal_get_Score() ;

constexpr void __cordl_internal_set_Score(int32_t  value) ;

/// @brief Method .ctor, addr 0x56e7738, size 0x8, virtual false, abstract: false, final false
inline void _ctor(int32_t  v) ;

/// @brief Convert to "::Fusion::INetworkStruct"
constexpr ::Fusion::INetworkStruct* i___Fusion__INetworkStruct() ;

// Ctor Parameters []
// @brief default ctor
constexpr HitTargetStruct() ;

// Ctor Parameters [CppParam { name: "Score", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr HitTargetStruct(int32_t  Score) noexcept;

private:
/// @brief Explicitly laid out type with union based offsets
union {
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x0
 uint8_t  ___Score_padding[0x0];
/// @brief Field Score, offset: 0x0, size: 0x4, def value: None
 int32_t  ___Score;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x0 for alignment
 uint8_t  ___Score_padding_forAlignment[0x0];
/// @brief Field Score, offset: 0x0, size: 0x4, def value: None
 int32_t  ___Score_forAlignment;
};
};
public:

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1111};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::HitTargetStruct) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
