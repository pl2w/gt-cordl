#pragma once
// IWYU pragma private; include "GlobalNamespace/ScenePerformanceData.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ScenePerformanceData)
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace GlobalNamespace {
class ScenePerformanceData;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::ScenePerformanceData*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ScenePerformanceData*, "", "ScenePerformanceData");
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: ScenePerformanceData
class CORDL_TYPE ScenePerformanceData : public ::System::Object {
public:
// Declarations
/// @brief Field _droppedFrames, offset 0x1c, size 0x4 
 __declspec(property(get=__cordl_internal_get__droppedFrames, put=__cordl_internal_set__droppedFrames)) int32_t  _droppedFrames;

/// @brief Field _gorillaCount, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get__gorillaCount, put=__cordl_internal_set__gorillaCount)) int32_t  _gorillaCount;

/// @brief Field _mapName, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__mapName, put=__cordl_internal_set__mapName)) ::StringW  _mapName;

/// @brief Field _medianDrawCallCount, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get__medianDrawCallCount, put=__cordl_internal_set__medianDrawCallCount)) int32_t  _medianDrawCallCount;

/// @brief Field _medianFPS, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get__medianFPS, put=__cordl_internal_set__medianFPS)) int32_t  _medianFPS;

/// @brief Field _medianMS, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get__medianMS, put=__cordl_internal_set__medianMS)) int32_t  _medianMS;

/// @brief Field _msCaptures, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__msCaptures, put=__cordl_internal_set__msCaptures)) ::System::Collections::Generic::List_1<int32_t>*  _msCaptures;

/// @brief Field _msHigh, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get__msHigh, put=__cordl_internal_set__msHigh)) int32_t  _msHigh;

static inline ::GlobalNamespace::ScenePerformanceData* New_ctor(::StringW  mapName, int32_t  gorillaCount, int32_t  droppedFrames, int32_t  msHigh, int32_t  medianMS, int32_t  medianFPS, int32_t  medianDrawCalls, ::System::Collections::Generic::List_1<int32_t>*  msCaptures) ;

constexpr int32_t const& __cordl_internal_get__droppedFrames() const;

constexpr int32_t& __cordl_internal_get__droppedFrames() ;

constexpr int32_t const& __cordl_internal_get__gorillaCount() const;

constexpr int32_t& __cordl_internal_get__gorillaCount() ;

constexpr ::StringW const& __cordl_internal_get__mapName() const;

constexpr ::StringW& __cordl_internal_get__mapName() ;

constexpr int32_t const& __cordl_internal_get__medianDrawCallCount() const;

constexpr int32_t& __cordl_internal_get__medianDrawCallCount() ;

constexpr int32_t const& __cordl_internal_get__medianFPS() const;

constexpr int32_t& __cordl_internal_get__medianFPS() ;

constexpr int32_t const& __cordl_internal_get__medianMS() const;

constexpr int32_t& __cordl_internal_get__medianMS() ;

constexpr ::System::Collections::Generic::List_1<int32_t>* const& __cordl_internal_get__msCaptures() const;

constexpr ::System::Collections::Generic::List_1<int32_t>*& __cordl_internal_get__msCaptures() ;

constexpr int32_t const& __cordl_internal_get__msHigh() const;

constexpr int32_t& __cordl_internal_get__msHigh() ;

constexpr void __cordl_internal_set__droppedFrames(int32_t  value) ;

constexpr void __cordl_internal_set__gorillaCount(int32_t  value) ;

constexpr void __cordl_internal_set__mapName(::StringW  value) ;

constexpr void __cordl_internal_set__medianDrawCallCount(int32_t  value) ;

constexpr void __cordl_internal_set__medianFPS(int32_t  value) ;

constexpr void __cordl_internal_set__medianMS(int32_t  value) ;

constexpr void __cordl_internal_set__msCaptures(::System::Collections::Generic::List_1<int32_t>*  value) ;

constexpr void __cordl_internal_set__msHigh(int32_t  value) ;

/// @brief Method .ctor, addr 0x56bc8e0, size 0xe0, virtual false, abstract: false, final false
inline void _ctor(::StringW  mapName, int32_t  gorillaCount, int32_t  droppedFrames, int32_t  msHigh, int32_t  medianMS, int32_t  medianFPS, int32_t  medianDrawCalls, ::System::Collections::Generic::List_1<int32_t>*  msCaptures) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ScenePerformanceData() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ScenePerformanceData", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ScenePerformanceData(ScenePerformanceData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ScenePerformanceData", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ScenePerformanceData(ScenePerformanceData const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{976};

/// @brief Field _mapName, offset: 0x10, size: 0x8, def value: None
 ::StringW  ____mapName;

/// @brief Field _gorillaCount, offset: 0x18, size: 0x4, def value: None
 int32_t  ____gorillaCount;

/// @brief Field _droppedFrames, offset: 0x1c, size: 0x4, def value: None
 int32_t  ____droppedFrames;

/// @brief Field _msHigh, offset: 0x20, size: 0x4, def value: None
 int32_t  ____msHigh;

/// @brief Field _medianMS, offset: 0x24, size: 0x4, def value: None
 int32_t  ____medianMS;

/// @brief Field _medianFPS, offset: 0x28, size: 0x4, def value: None
 int32_t  ____medianFPS;

/// @brief Field _medianDrawCallCount, offset: 0x2c, size: 0x4, def value: None
 int32_t  ____medianDrawCallCount;

/// @brief Field _msCaptures, offset: 0x30, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<int32_t>*  ____msCaptures;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ScenePerformanceData, ____mapName) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ScenePerformanceData, ____gorillaCount) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ScenePerformanceData, ____droppedFrames) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ScenePerformanceData, ____msHigh) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ScenePerformanceData, ____medianMS) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ScenePerformanceData, ____medianFPS) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ScenePerformanceData, ____medianDrawCallCount) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ScenePerformanceData, ____msCaptures) == 0x30, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ScenePerformanceData) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace
