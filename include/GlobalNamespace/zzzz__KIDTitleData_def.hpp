#pragma once
// IWYU pragma private; include "GlobalNamespace/KIDTitleData.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(KIDTitleData)
// Forward declare root types
namespace GlobalNamespace {
class KIDTitleData;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::KIDTitleData*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::KIDTitleData*, "", "KIDTitleData");
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: KIDTitleData
class CORDL_TYPE KIDTitleData : public ::System::Object {
public:
// Declarations
/// @brief Field KIDEnabled, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_KIDEnabled, put=__cordl_internal_set_KIDEnabled)) ::StringW  KIDEnabled;

/// @brief Field KIDNewPlayerIsoTimestamp, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_KIDNewPlayerIsoTimestamp, put=__cordl_internal_set_KIDNewPlayerIsoTimestamp)) ::StringW  KIDNewPlayerIsoTimestamp;

/// @brief Field KIDPhase, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_KIDPhase, put=__cordl_internal_set_KIDPhase)) int32_t  KIDPhase;

static inline ::GlobalNamespace::KIDTitleData* New_ctor() ;

constexpr ::StringW const& __cordl_internal_get_KIDEnabled() const;

constexpr ::StringW& __cordl_internal_get_KIDEnabled() ;

constexpr ::StringW const& __cordl_internal_get_KIDNewPlayerIsoTimestamp() const;

constexpr ::StringW& __cordl_internal_get_KIDNewPlayerIsoTimestamp() ;

constexpr int32_t const& __cordl_internal_get_KIDPhase() const;

constexpr int32_t& __cordl_internal_get_KIDPhase() ;

constexpr void __cordl_internal_set_KIDEnabled(::StringW  value) ;

constexpr void __cordl_internal_set_KIDNewPlayerIsoTimestamp(::StringW  value) ;

constexpr void __cordl_internal_set_KIDPhase(int32_t  value) ;

/// @brief Method .ctor, addr 0x5a261d8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr KIDTitleData() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "KIDTitleData", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
KIDTitleData(KIDTitleData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "KIDTitleData", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
KIDTitleData(KIDTitleData const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2876};

/// @brief Field KIDEnabled, offset: 0x10, size: 0x8, def value: None
 ::StringW  ___KIDEnabled;

/// @brief Field KIDPhase, offset: 0x18, size: 0x4, def value: None
 int32_t  ___KIDPhase;

/// @brief Field KIDNewPlayerIsoTimestamp, offset: 0x20, size: 0x8, def value: None
 ::StringW  ___KIDNewPlayerIsoTimestamp;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::KIDTitleData, ___KIDEnabled) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::KIDTitleData, ___KIDPhase) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::KIDTitleData, ___KIDNewPlayerIsoTimestamp) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::KIDTitleData) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace
