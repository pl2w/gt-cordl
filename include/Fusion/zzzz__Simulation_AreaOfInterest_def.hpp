#pragma once
// IWYU pragma private; include "Fusion/Simulation_AreaOfInterest.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Simulation_AreaOfInterest)
namespace System::Collections::Generic {
template<typename T>
class HashSet_1;
}
namespace System {
template<typename T1,typename T2,typename T3>
struct ValueTuple_3;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
struct Simulation_AreaOfInterest;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::Simulation_AreaOfInterest);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::Simulation_AreaOfInterest, "Fusion", "Simulation/AreaOfInterest");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: Fusion.Simulation/AreaOfInterest
#pragma pack(push, 0)
struct CORDL_TYPE Simulation_AreaOfInterest {
public:
// Declarations
/// @brief Field CELL_SIZE, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_CELL_SIZE, put=setStaticF_CELL_SIZE)) int32_t  CELL_SIZE;

/// @brief Field X_SIZE, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_X_SIZE, put=setStaticF_X_SIZE)) int32_t  X_SIZE;

/// @brief Field Y_SIZE, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_Y_SIZE, put=setStaticF_Y_SIZE)) int32_t  Y_SIZE;

/// @brief Field Z_SIZE, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_Z_SIZE, put=setStaticF_Z_SIZE)) int32_t  Z_SIZE;

/// @brief Method ClampCellCoords, addr 0x5ff3078, size 0xe4, virtual false, abstract: false, final false
static inline ::System::ValueTuple_3<int32_t,int32_t,int32_t> ClampCellCoords(int32_t  x, int32_t  y, int32_t  z) ;

/// @brief Method GetCellSize, addr 0x5ff2cf4, size 0x58, virtual false, abstract: false, final false
static inline int32_t GetCellSize() ;

/// @brief Method GetGridSize, addr 0x5ff2c60, size 0x94, virtual false, abstract: false, final false
static inline ::System::ValueTuple_3<int32_t,int32_t,int32_t> GetGridSize() ;

/// @brief Method SphereToCells, addr 0x5ff2d4c, size 0x174, virtual false, abstract: false, final false
static inline void SphereToCells(::UnityEngine::Vector3  position, float_t  radius, ::System::Collections::Generic::HashSet_1<int32_t>*  cells) ;

/// @brief Method ToCell, addr 0x5ff32dc, size 0x84, virtual false, abstract: false, final false
static inline int32_t ToCell(::UnityEngine::Vector3  position) ;

/// @brief Method ToCell, addr 0x5ff2fec, size 0x8c, virtual false, abstract: false, final false
static inline int32_t ToCell(int32_t  x, int32_t  y, int32_t  z) ;

/// @brief Method ToCellCenter, addr 0x5ff3208, size 0xd4, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector3 ToCellCenter(int32_t  index) ;

/// @brief Method ToCellCoords, addr 0x5ff315c, size 0xac, virtual false, abstract: false, final false
static inline ::System::ValueTuple_3<int32_t,int32_t,int32_t> ToCellCoords(int32_t  index) ;

/// @brief Method ToCellCoords, addr 0x5ff2ec0, size 0x12c, virtual false, abstract: false, final false
static inline ::System::ValueTuple_3<int32_t,int32_t,int32_t> ToCellCoords(::UnityEngine::Vector3  position) ;

/// [CompilerGenerated]
/// @brief Method <ClampCellCoords>g__Clamp|15_0, addr 0x5ff3360, size 0x18, virtual false, abstract: false, final false
static inline int32_t _ClampCellCoords_g__Clamp_15_0(int32_t  v, int32_t  max) ;

static inline int32_t getStaticF_CELL_SIZE() ;

static inline int32_t getStaticF_X_SIZE() ;

static inline int32_t getStaticF_Y_SIZE() ;

static inline int32_t getStaticF_Z_SIZE() ;

static inline void setStaticF_CELL_SIZE(int32_t  value) ;

static inline void setStaticF_X_SIZE(int32_t  value) ;

static inline void setStaticF_Y_SIZE(int32_t  value) ;

static inline void setStaticF_Z_SIZE(int32_t  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr Simulation_AreaOfInterest() ;

/// @brief Field GRID_DEFAULT offset 0xffffffff size 0x4
static constexpr int32_t  GRID_DEFAULT{static_cast<int32_t>(0x400)};

/// @brief Field MAX_SHARED_RADIUS offset 0xffffffff size 0x4
static constexpr int32_t  MAX_SHARED_RADIUS{static_cast<int32_t>(0x12c)};

/// @brief Field SIZE_DEFAULT offset 0xffffffff size 0x4
static constexpr int32_t  SIZE_DEFAULT{static_cast<int32_t>(0x20)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19304};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::Simulation_AreaOfInterest) == 0x1, "Size mismatch!");

} // namespace end def GlobalNamespace
