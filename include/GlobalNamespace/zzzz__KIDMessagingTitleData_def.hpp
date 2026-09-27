#pragma once
// IWYU pragma private; include "GlobalNamespace/KIDMessagingTitleData.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(KIDMessagingTitleData)
// Forward declare root types
namespace GlobalNamespace {
class KIDMessagingTitleData;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::KIDMessagingTitleData*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::KIDMessagingTitleData*, "", "KIDMessagingTitleData");
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: KIDMessagingTitleData
class CORDL_TYPE KIDMessagingTitleData : public ::System::Object {
public:
// Declarations
/// @brief Field KIDSetupConfirmation, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_KIDSetupConfirmation, put=__cordl_internal_set_KIDSetupConfirmation)) ::StringW  KIDSetupConfirmation;

static inline ::GlobalNamespace::KIDMessagingTitleData* New_ctor() ;

constexpr ::StringW const& __cordl_internal_get_KIDSetupConfirmation() const;

constexpr ::StringW& __cordl_internal_get_KIDSetupConfirmation() ;

constexpr void __cordl_internal_set_KIDSetupConfirmation(::StringW  value) ;

/// @brief Method .ctor, addr 0x5a261e0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr KIDMessagingTitleData() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "KIDMessagingTitleData", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
KIDMessagingTitleData(KIDMessagingTitleData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "KIDMessagingTitleData", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
KIDMessagingTitleData(KIDMessagingTitleData const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2877};

/// @brief Field KIDSetupConfirmation, offset: 0x10, size: 0x8, def value: None
 ::StringW  ___KIDSetupConfirmation;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::KIDMessagingTitleData, ___KIDSetupConfirmation) == 0x10, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::KIDMessagingTitleData) == 0x18, "Size mismatch!");

} // namespace end def GlobalNamespace
