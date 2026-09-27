#pragma once
// IWYU pragma private; include "Unity/Burst/BurstRuntime_HashCode64_1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(BurstRuntime_HashCode64_1)
// Forward declare root types
namespace GlobalNamespace {
template<typename T>
struct BurstRuntime_HashCode64_1;
}
// Write type traits
MARK_GEN_VAL_T(::GlobalNamespace::BurstRuntime_HashCode64_1);
DEFINE_IL2CPP_GEN_CLASS(::GlobalNamespace::BurstRuntime_HashCode64_1, "Unity.Burst", "BurstRuntime/HashCode64`1");
// Dependencies 
namespace GlobalNamespace {
// cpp template
template<typename T>
// Is value type: true
// CS Name: Unity.Burst.BurstRuntime/HashCode64`1<T>
#pragma pack(push, 0)
struct CORDL_TYPE BurstRuntime_HashCode64_1 {
public:
// Declarations
/// @brief Field Value, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Value, put=setStaticF_Value)) int64_t  Value;

static inline int64_t getStaticF_Value() ;

static inline void setStaticF_Value(int64_t  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr BurstRuntime_HashCode64_1() ;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{32172};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
} // namespace end def GlobalNamespace
