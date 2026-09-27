#pragma once
// IWYU pragma private; include "GlobalNamespace/FusionGameModeData.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Fusion/zzzz__NetworkBehaviour_def.hpp"
CORDL_MODULE_EXPORT(FusionGameModeData)
namespace Fusion {
class INetworkStruct;
}
namespace System {
class Object;
}
// Forward declare root types
namespace GlobalNamespace {
class FusionGameModeData;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::FusionGameModeData*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::FusionGameModeData*, "", "FusionGameModeData");
// [NetworkBehaviourWeaved(0)]
// Dependencies Fusion.NetworkBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: FusionGameModeData
class CORDL_TYPE FusionGameModeData : public ::Fusion::NetworkBehaviour {
public:
// Declarations
 __declspec(property(get=get_Data, put=set_Data)) ::System::Object*  Data;

/// @brief Field data, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get_data, put=__cordl_internal_set_data)) ::Fusion::INetworkStruct*  data;

/// [WeaverGenerated]
/// @brief Method CopyBackingFieldsToState, addr 0x579bb04, size 0x4, virtual true, abstract: false, final false
inline void CopyBackingFieldsToState(bool  _cordl_fixed_empty_name_whitespace) ;

/// [WeaverGenerated]
/// @brief Method CopyStateToBackingFields, addr 0x579bb60, size 0x4, virtual true, abstract: false, final false
inline void CopyStateToBackingFields() ;

static inline ::GlobalNamespace::FusionGameModeData* New_ctor() ;

constexpr ::Fusion::INetworkStruct* const& __cordl_internal_get_data() const;

constexpr ::Fusion::INetworkStruct*& __cordl_internal_get_data() ;

constexpr void __cordl_internal_set_data(::Fusion::INetworkStruct*  value) ;

/// @brief Method .ctor, addr 0x579baa0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_Data, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::System::Object* get_Data() ;

/// @brief Method set_Data, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void set_Data(::System::Object*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FusionGameModeData() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FusionGameModeData", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
FusionGameModeData(FusionGameModeData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FusionGameModeData", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
FusionGameModeData(FusionGameModeData const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1487};

/// @brief Field data, offset: 0x80, size: 0x8, def value: None
 ::Fusion::INetworkStruct*  ___data;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::FusionGameModeData, ___data) == 0x80, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::FusionGameModeData) == 0x88, "Size mismatch!");

} // namespace end def GlobalNamespace
