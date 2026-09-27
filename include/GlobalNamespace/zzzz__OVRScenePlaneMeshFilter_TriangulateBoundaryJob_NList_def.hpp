#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRScenePlaneMeshFilter_TriangulateBoundaryJob_NList.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OVRScenePlaneMeshFilter_TriangulateBoundaryJob_NList)
namespace System {
class IDisposable;
}
namespace Unity::Collections {
struct Allocator;
}
// Forward declare root types
namespace GlobalNamespace {
struct TriangulateBoundaryJob_OVRScenePlaneMeshFilter_NList;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::TriangulateBoundaryJob_OVRScenePlaneMeshFilter_NList);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::TriangulateBoundaryJob_OVRScenePlaneMeshFilter_NList, "", "OVRScenePlaneMeshFilter/TriangulateBoundaryJob/NList");
// [DefaultMember("Item")]
// Dependencies Unity.Collections.NativeArray`1<T>
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRScenePlaneMeshFilter/TriangulateBoundaryJob/NList
struct CORDL_TYPE TriangulateBoundaryJob_OVRScenePlaneMeshFilter_NList {
public:
// Declarations
 __declspec(property(get=get_Count, put=set_Count)) int32_t  Count;

 __declspec(property(get=get_Item)) int32_t  Item[];

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

/// @brief Method Dispose, addr 0xa63a4ec, size 0x48, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method GetAt, addr 0xa63a3a4, size 0x44, virtual false, abstract: false, final false
inline int32_t GetAt(int32_t  index) ;

/// @brief Method RemoveAt, addr 0xa63a4a0, size 0x3c, virtual false, abstract: false, final false
inline void RemoveAt(int32_t  index) ;

/// @brief Method .ctor, addr 0xa63a2f4, size 0xa4, virtual false, abstract: false, final false
inline void _ctor(int32_t  capacity, ::Unity::Collections::Allocator  allocator) ;

/// [IsReadOnly]
/// [CompilerGenerated]
/// @brief Method get_Count, addr 0xa63a4dc, size 0x8, virtual false, abstract: false, final false
inline int32_t get_Count() ;

/// @brief Method get_Item, addr 0xa63a398, size 0xc, virtual false, abstract: false, final false
inline int32_t get_Item(int32_t  index) ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() ;

/// [CompilerGenerated]
/// @brief Method set_Count, addr 0xa63a4e4, size 0x8, virtual false, abstract: false, final false
inline void set_Count(int32_t  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr TriangulateBoundaryJob_OVRScenePlaneMeshFilter_NList() ;

// Ctor Parameters [CppParam { name: "_Count_k__BackingField", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_data", ty: "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: None, comment: None }]
constexpr TriangulateBoundaryJob_OVRScenePlaneMeshFilter_NList(int32_t  _Count_k__BackingField, ::Unity::Collections::NativeArray_1<int32_t>  _data) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12439};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// [CompilerGenerated]
/// @brief Field <Count>k__BackingField, offset: 0x0, size: 0x4, def value: None
 int32_t  _Count_k__BackingField;

/// @brief Field _data, offset: 0x8, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<int32_t>  _data;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::TriangulateBoundaryJob_OVRScenePlaneMeshFilter_NList, _Count_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TriangulateBoundaryJob_OVRScenePlaneMeshFilter_NList, _data) == 0x8, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::TriangulateBoundaryJob_OVRScenePlaneMeshFilter_NList) == 0x18, "Size mismatch!");

} // namespace end def GlobalNamespace
