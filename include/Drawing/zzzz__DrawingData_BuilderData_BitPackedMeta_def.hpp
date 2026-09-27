#pragma once
// IWYU pragma private; include "Drawing/DrawingData_BuilderData_BitPackedMeta.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(DrawingData_BuilderData_BitPackedMeta)
namespace System {
class Object;
}
// Forward declare root types
namespace GlobalNamespace {
struct BuilderData_DrawingData_BitPackedMeta;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::BuilderData_DrawingData_BitPackedMeta);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::BuilderData_DrawingData_BitPackedMeta, "Drawing", "DrawingData/BuilderData/BitPackedMeta");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: Drawing.DrawingData/BuilderData/BitPackedMeta
struct CORDL_TYPE BuilderData_DrawingData_BitPackedMeta {
public:
// Declarations
 __declspec(property(get=get_dataIndex)) int32_t  dataIndex;

 __declspec(property(get=get_isBuiltInCommandBuilder)) bool  isBuiltInCommandBuilder;

 __declspec(property(get=get_uniqueID)) int32_t  uniqueID;

/// @brief Method Equals, addr 0x55d18f0, size 0x78, virtual true, abstract: false, final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method GetHashCode, addr 0x55d1968, size 0x8, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

/// @brief Method .ctor, addr 0x55d01b4, size 0x70, virtual false, abstract: false, final false
inline void _ctor(int32_t  dataIndex, int32_t  uniqueID, bool  isBuiltInCommandBuilder) ;

/// @brief Method get_dataIndex, addr 0x55d18b8, size 0x8, virtual false, abstract: false, final false
inline int32_t get_dataIndex() ;

/// @brief Method get_isBuiltInCommandBuilder, addr 0x55d18cc, size 0xc, virtual false, abstract: false, final false
inline bool get_isBuiltInCommandBuilder() ;

/// @brief Method get_uniqueID, addr 0x55d18c0, size 0xc, virtual false, abstract: false, final false
inline int32_t get_uniqueID() ;

/// @brief Method op_Equality, addr 0x55d18d8, size 0xc, virtual false, abstract: false, final false
static inline bool op_Equality(::GlobalNamespace::BuilderData_DrawingData_BitPackedMeta  lhs, ::GlobalNamespace::BuilderData_DrawingData_BitPackedMeta  rhs) ;

/// @brief Method op_Inequality, addr 0x55d18e4, size 0xc, virtual false, abstract: false, final false
static inline bool op_Inequality(::GlobalNamespace::BuilderData_DrawingData_BitPackedMeta  lhs, ::GlobalNamespace::BuilderData_DrawingData_BitPackedMeta  rhs) ;

// Ctor Parameters []
// @brief default ctor
constexpr BuilderData_DrawingData_BitPackedMeta() ;

// Ctor Parameters [CppParam { name: "flags", ty: "uint32_t", modifiers: "", def_value: None, comment: None }]
constexpr BuilderData_DrawingData_BitPackedMeta(uint32_t  flags) noexcept;

/// @brief Field IndexMask offset 0xffffffff size 0x4
static constexpr int32_t  IndexMask{static_cast<int32_t>(0xffff)};

/// @brief Field IsBuiltInFlagIndex offset 0xffffffff size 0x4
static constexpr int32_t  IsBuiltInFlagIndex{static_cast<int32_t>(0x10)};

/// @brief Field MaxDataIndex offset 0xffffffff size 0x4
static constexpr int32_t  MaxDataIndex{static_cast<int32_t>(0xffff)};

/// @brief Field UniqueIDBitshift offset 0xffffffff size 0x4
static constexpr int32_t  UniqueIDBitshift{static_cast<int32_t>(0x11)};

/// @brief Field UniqueIdMask offset 0xffffffff size 0x4
static constexpr int32_t  UniqueIdMask{static_cast<int32_t>(0x7fff)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{27735};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field flags, offset: 0x0, size: 0x4, def value: None
 uint32_t  flags;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BuilderData_DrawingData_BitPackedMeta, flags) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::BuilderData_DrawingData_BitPackedMeta) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
