#pragma once
// IWYU pragma private; include "GorillaTagScripts/ObstacleCourse/ObstacleCourseData.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Fusion/CodeGen/zzzz__FixedStorage@4_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ObstacleCourseData)
namespace Fusion {
class INetworkStruct;
}
namespace Fusion {
template<typename T>
struct NetworkArray_1;
}
namespace GorillaTagScripts::ObstacleCourse {
class ObstacleCourse;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace GorillaTagScripts::ObstacleCourse {
struct ObstacleCourseData;
}
// Write type traits
MARK_VAL_T(::GorillaTagScripts::ObstacleCourse::ObstacleCourseData);
DEFINE_IL2CPP_CLASS(::GorillaTagScripts::ObstacleCourse::ObstacleCourseData, "GorillaTagScripts.ObstacleCourse", "ObstacleCourseData");
// [NetworkStructWeaved(9)]
// Dependencies Fusion.CodeGen.FixedStorage@4
namespace GorillaTagScripts::ObstacleCourse {
// Is value type: true
// CS Name: GorillaTagScripts.ObstacleCourse.ObstacleCourseData
#pragma pack(push, 0)
struct CORDL_TYPE ObstacleCourseData {
public:
// Declarations
/// [Networked]
/// [Capacity(4)]
/// [NetworkedWeavedArray(4, 1, typeof(Fusion.ElementReaderWriterInt32))]
/// @brief [NetworkedWeaved(5, 4)]
 __declspec(property(get=get_CurrentRaceState)) ::Fusion::NetworkArray_1<int32_t>  CurrentRaceState;

 __declspec(property(get=get_ObstacleCourseCount, put=set_ObstacleCourseCount)) int32_t  ObstacleCourseCount;

/// [Networked]
/// [Capacity(4)]
/// [NetworkedWeavedArray(4, 1, typeof(Fusion.ElementReaderWriterInt32))]
/// @brief [NetworkedWeaved(1, 4)]
 __declspec(property(get=get_WinnerActorNumber)) ::Fusion::NetworkArray_1<int32_t>  WinnerActorNumber;

/// @brief Field _CurrentRaceState, offset 0x14, size 0x10 
 __declspec(property(get=__cordl_internal_get__CurrentRaceState, put=__cordl_internal_set__CurrentRaceState)) ::Fusion::CodeGen::FixedStorage@4  _CurrentRaceState;

/// @brief Field <ObstacleCourseCount>k__BackingField, offset 0x0, size 0x4 
 __declspec(property(get=__cordl_internal_get__ObstacleCourseCount_k__BackingField, put=__cordl_internal_set__ObstacleCourseCount_k__BackingField)) int32_t  _ObstacleCourseCount_k__BackingField;

/// @brief Field _WinnerActorNumber, offset 0x4, size 0x10 
 __declspec(property(get=__cordl_internal_get__WinnerActorNumber, put=__cordl_internal_set__WinnerActorNumber)) ::Fusion::CodeGen::FixedStorage@4  _WinnerActorNumber;

/// @brief Convert operator to "::Fusion::INetworkStruct"
constexpr operator  ::Fusion::INetworkStruct*() ;

constexpr ::Fusion::CodeGen::FixedStorage@4 const& __cordl_internal_get__CurrentRaceState() const;

constexpr ::Fusion::CodeGen::FixedStorage@4& __cordl_internal_get__CurrentRaceState() ;

constexpr int32_t const& __cordl_internal_get__ObstacleCourseCount_k__BackingField() const;

constexpr int32_t& __cordl_internal_get__ObstacleCourseCount_k__BackingField() ;

constexpr ::Fusion::CodeGen::FixedStorage@4 const& __cordl_internal_get__WinnerActorNumber() const;

constexpr ::Fusion::CodeGen::FixedStorage@4& __cordl_internal_get__WinnerActorNumber() ;

constexpr void __cordl_internal_set__CurrentRaceState(::Fusion::CodeGen::FixedStorage@4  value) ;

constexpr void __cordl_internal_set__ObstacleCourseCount_k__BackingField(int32_t  value) ;

constexpr void __cordl_internal_set__WinnerActorNumber(::Fusion::CodeGen::FixedStorage@4  value) ;

/// @brief Method .ctor, addr 0x5c1819c, size 0x1bc, virtual false, abstract: false, final false
inline void _ctor(::System::Collections::Generic::List_1<::UnityW<::GorillaTagScripts::ObstacleCourse::ObstacleCourse>>*  courses) ;

/// @brief Method get_CurrentRaceState, addr 0x5c18644, size 0xe0, virtual false, abstract: false, final false
inline ::Fusion::NetworkArray_1<int32_t> get_CurrentRaceState() ;

/// [IsReadOnly]
/// [CompilerGenerated]
/// @brief Method get_ObstacleCourseCount, addr 0x5c18bb8, size 0x8, virtual false, abstract: false, final false
inline int32_t get_ObstacleCourseCount() ;

/// @brief Method get_WinnerActorNumber, addr 0x5c18564, size 0xe0, virtual false, abstract: false, final false
inline ::Fusion::NetworkArray_1<int32_t> get_WinnerActorNumber() ;

/// @brief Convert to "::Fusion::INetworkStruct"
constexpr ::Fusion::INetworkStruct* i___Fusion__INetworkStruct() ;

/// [CompilerGenerated]
/// @brief Method set_ObstacleCourseCount, addr 0x5c18bc0, size 0x8, virtual false, abstract: false, final false
inline void set_ObstacleCourseCount(int32_t  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr ObstacleCourseData() ;

// Ctor Parameters [CppParam { name: "_ObstacleCourseCount_k__BackingField", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_WinnerActorNumber", ty: "::Fusion::CodeGen::FixedStorage@4", modifiers: "", def_value: None, comment: None }, CppParam { name: "_CurrentRaceState", ty: "::Fusion::CodeGen::FixedStorage@4", modifiers: "", def_value: None, comment: None }]
constexpr ObstacleCourseData(int32_t  _ObstacleCourseCount_k__BackingField, ::Fusion::CodeGen::FixedStorage@4  _WinnerActorNumber, ::Fusion::CodeGen::FixedStorage@4  _CurrentRaceState) noexcept;

private:
/// @brief Explicitly laid out type with union based offsets
union {
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x0
 uint8_t  ____ObstacleCourseCount_k__BackingField_padding[0x0];
/// [CompilerGenerated]
/// @brief Field <ObstacleCourseCount>k__BackingField, offset: 0x0, size: 0x4, def value: None
 int32_t  ____ObstacleCourseCount_k__BackingField;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x0 for alignment
 uint8_t  ____ObstacleCourseCount_k__BackingField_padding_forAlignment[0x0];
/// [CompilerGenerated]
/// @brief Field <ObstacleCourseCount>k__BackingField, offset: 0x0, size: 0x4, def value: None
 int32_t  ____ObstacleCourseCount_k__BackingField_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x4
 uint8_t  ____WinnerActorNumber_padding[0x4];
/// [FixedBufferProperty(typeof(Fusion.NetworkArray`1<T>), typeof(Fusion.CodeGen.UnityArraySurrogate@ElementReaderWriterInt32), 4, order = -2147483647)]
/// [WeaverGenerated]
/// [SerializeField]
/// @brief Field _WinnerActorNumber, offset: 0x4, size: 0x10, def value: None
 ::Fusion::CodeGen::FixedStorage@4  ____WinnerActorNumber;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x4 for alignment
 uint8_t  ____WinnerActorNumber_padding_forAlignment[0x4];
/// [FixedBufferProperty(typeof(Fusion.NetworkArray`1<T>), typeof(Fusion.CodeGen.UnityArraySurrogate@ElementReaderWriterInt32), 4, order = -2147483647)]
/// [WeaverGenerated]
/// [SerializeField]
/// @brief Field _WinnerActorNumber, offset: 0x4, size: 0x10, def value: None
 ::Fusion::CodeGen::FixedStorage@4  ____WinnerActorNumber_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x14
 uint8_t  ____CurrentRaceState_padding[0x14];
/// [FixedBufferProperty(typeof(Fusion.NetworkArray`1<T>), typeof(Fusion.CodeGen.UnityArraySurrogate@ElementReaderWriterInt32), 4, order = -2147483647)]
/// [WeaverGenerated]
/// [SerializeField]
/// @brief Field _CurrentRaceState, offset: 0x14, size: 0x10, def value: None
 ::Fusion::CodeGen::FixedStorage@4  ____CurrentRaceState;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x14 for alignment
 uint8_t  ____CurrentRaceState_padding_forAlignment[0x14];
/// [FixedBufferProperty(typeof(Fusion.NetworkArray`1<T>), typeof(Fusion.CodeGen.UnityArraySurrogate@ElementReaderWriterInt32), 4, order = -2147483647)]
/// [WeaverGenerated]
/// [SerializeField]
/// @brief Field _CurrentRaceState, offset: 0x14, size: 0x10, def value: None
 ::Fusion::CodeGen::FixedStorage@4  ____CurrentRaceState_forAlignment;
};
};
public:

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4114};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x24};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(sizeof(::GorillaTagScripts::ObstacleCourse::ObstacleCourseData) == 0x24, "Size mismatch!");

} // namespace end def GorillaTagScripts::ObstacleCourse
