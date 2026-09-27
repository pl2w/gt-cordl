#pragma once
// IWYU pragma private; include "GT_CustomMapSupportRuntime/Constants.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(Constants)
namespace GlobalNamespace {
struct Constants_CMSGameModeType;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
class Type;
}
// Forward declare root types
namespace GT_CustomMapSupportRuntime {
class Constants;
}
// Write type traits
MARK_REF_T(::GT_CustomMapSupportRuntime::Constants*);
DEFINE_IL2CPP_CLASS(::GT_CustomMapSupportRuntime::Constants*, "GT_CustomMapSupportRuntime", "Constants");
// [NullableContext(1)]
// [Nullable(0)]
// Dependencies System.Object, UnityEngine.Vector3
namespace GT_CustomMapSupportRuntime {
// Is value type: false
// CS Name: GT_CustomMapSupportRuntime.Constants
class CORDL_TYPE Constants : public ::System::Object {
public:
// Declarations
using CMSGameModeType = ::GlobalNamespace::Constants_CMSGameModeType;

/// @brief Field AccessDoorWorldPosition, offset 0xffffffff, size 0xc 
 __declspec(property(get=getStaticF_AccessDoorWorldPosition, put=setStaticF_AccessDoorWorldPosition)) ::UnityEngine::Vector3  AccessDoorWorldPosition;

/// @brief Field aiAgentLimit, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_aiAgentLimit, put=setStaticF_aiAgentLimit)) int32_t  aiAgentLimit;

/// @brief Field atmCreatorCodeSizeLimit, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_atmCreatorCodeSizeLimit, put=setStaticF_atmCreatorCodeSizeLimit)) int32_t  atmCreatorCodeSizeLimit;

/// @brief Field componentAllowList, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_componentAllowList, put=setStaticF_componentAllowList)) ::System::Collections::Generic::List_1<::System::Type*>*  componentAllowList;

/// @brief Field componentTypeStringAllowList, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_componentTypeStringAllowList, put=setStaticF_componentTypeStringAllowList)) ::System::Collections::Generic::List_1<::StringW>*  componentTypeStringAllowList;

/// @brief Field componentTypeStringsToStripPreExport, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_componentTypeStringsToStripPreExport, put=setStaticF_componentTypeStringsToStripPreExport)) ::System::Collections::Generic::List_1<::StringW>*  componentTypeStringsToStripPreExport;

/// @brief Field customMapSupportVersion, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_customMapSupportVersion, put=setStaticF_customMapSupportVersion)) int32_t  customMapSupportVersion;

/// @brief Field leafGliderLimit, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_leafGliderLimit, put=setStaticF_leafGliderLimit)) int32_t  leafGliderLimit;

/// @brief Field maxRopeLength, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_maxRopeLength, put=setStaticF_maxRopeLength)) int32_t  maxRopeLength;

/// @brief Field minRopeLength, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_minRopeLength, put=setStaticF_minRopeLength)) int32_t  minRopeLength;

/// @brief Field minTeleportDistFromStorePlaceholder, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_minTeleportDistFromStorePlaceholder, put=setStaticF_minTeleportDistFromStorePlaceholder)) float_t  minTeleportDistFromStorePlaceholder;

/// @brief Field storeATMLimit, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_storeATMLimit, put=setStaticF_storeATMLimit)) int32_t  storeATMLimit;

/// @brief Field storeCheckoutCounterLimit, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_storeCheckoutCounterLimit, put=setStaticF_storeCheckoutCounterLimit)) int32_t  storeCheckoutCounterLimit;

/// @brief Field storeDisplayStandLimit, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_storeDisplayStandLimit, put=setStaticF_storeDisplayStandLimit)) int32_t  storeDisplayStandLimit;

/// @brief Field storeTryOnAreaLimit, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_storeTryOnAreaLimit, put=setStaticF_storeTryOnAreaLimit)) int32_t  storeTryOnAreaLimit;

/// @brief Field storeTryOnAreaVolumeLimit, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_storeTryOnAreaVolumeLimit, put=setStaticF_storeTryOnAreaVolumeLimit)) float_t  storeTryOnAreaVolumeLimit;

/// @brief Field storeTryOnConsoleLimit, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_storeTryOnConsoleLimit, put=setStaticF_storeTryOnConsoleLimit)) int32_t  storeTryOnConsoleLimit;

static inline ::GT_CustomMapSupportRuntime::Constants* New_ctor() ;

/// @brief Method .ctor, addr 0x9cb3d68, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::UnityEngine::Vector3 getStaticF_AccessDoorWorldPosition() ;

static inline int32_t getStaticF_aiAgentLimit() ;

static inline int32_t getStaticF_atmCreatorCodeSizeLimit() ;

static inline ::System::Collections::Generic::List_1<::System::Type*>* getStaticF_componentAllowList() ;

static inline ::System::Collections::Generic::List_1<::StringW>* getStaticF_componentTypeStringAllowList() ;

static inline ::System::Collections::Generic::List_1<::StringW>* getStaticF_componentTypeStringsToStripPreExport() ;

static inline int32_t getStaticF_customMapSupportVersion() ;

static inline int32_t getStaticF_leafGliderLimit() ;

static inline int32_t getStaticF_maxRopeLength() ;

static inline int32_t getStaticF_minRopeLength() ;

static inline float_t getStaticF_minTeleportDistFromStorePlaceholder() ;

static inline int32_t getStaticF_storeATMLimit() ;

static inline int32_t getStaticF_storeCheckoutCounterLimit() ;

static inline int32_t getStaticF_storeDisplayStandLimit() ;

static inline int32_t getStaticF_storeTryOnAreaLimit() ;

static inline float_t getStaticF_storeTryOnAreaVolumeLimit() ;

static inline int32_t getStaticF_storeTryOnConsoleLimit() ;

static inline void setStaticF_AccessDoorWorldPosition(::UnityEngine::Vector3  value) ;

static inline void setStaticF_aiAgentLimit(int32_t  value) ;

static inline void setStaticF_atmCreatorCodeSizeLimit(int32_t  value) ;

static inline void setStaticF_componentAllowList(::System::Collections::Generic::List_1<::System::Type*>*  value) ;

static inline void setStaticF_componentTypeStringAllowList(::System::Collections::Generic::List_1<::StringW>*  value) ;

static inline void setStaticF_componentTypeStringsToStripPreExport(::System::Collections::Generic::List_1<::StringW>*  value) ;

static inline void setStaticF_customMapSupportVersion(int32_t  value) ;

static inline void setStaticF_leafGliderLimit(int32_t  value) ;

static inline void setStaticF_maxRopeLength(int32_t  value) ;

static inline void setStaticF_minRopeLength(int32_t  value) ;

static inline void setStaticF_minTeleportDistFromStorePlaceholder(float_t  value) ;

static inline void setStaticF_storeATMLimit(int32_t  value) ;

static inline void setStaticF_storeCheckoutCounterLimit(int32_t  value) ;

static inline void setStaticF_storeDisplayStandLimit(int32_t  value) ;

static inline void setStaticF_storeTryOnAreaLimit(int32_t  value) ;

static inline void setStaticF_storeTryOnAreaVolumeLimit(float_t  value) ;

static inline void setStaticF_storeTryOnConsoleLimit(int32_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Constants() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Constants", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Constants(Constants && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Constants", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Constants(Constants const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30890};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GT_CustomMapSupportRuntime::Constants) == 0x10, "Size mismatch!");

} // namespace end def GT_CustomMapSupportRuntime
