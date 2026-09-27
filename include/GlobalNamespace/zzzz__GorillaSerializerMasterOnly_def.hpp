#pragma once
// IWYU pragma private; include "GlobalNamespace/GorillaSerializerMasterOnly.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__GorillaWrappedSerializer_def.hpp"
CORDL_MODULE_EXPORT(GorillaSerializerMasterOnly)
namespace Photon::Pun {
struct PhotonMessageInfo;
}
namespace Photon::Pun {
class PhotonStream;
}
// Forward declare root types
namespace GlobalNamespace {
class GorillaSerializerMasterOnly;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::GorillaSerializerMasterOnly*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GorillaSerializerMasterOnly*, "", "GorillaSerializerMasterOnly");
// [NetworkBehaviourWeaved(0)]
// Dependencies GorillaWrappedSerializer
namespace GlobalNamespace {
// Is value type: false
// CS Name: GorillaSerializerMasterOnly
class CORDL_TYPE GorillaSerializerMasterOnly : public ::GlobalNamespace::GorillaWrappedSerializer {
public:
// Declarations
/// [WeaverGenerated]
/// @brief Method CopyBackingFieldsToState, addr 0x58f2d60, size 0x4, virtual true, abstract: false, final false
inline void CopyBackingFieldsToState(bool  _cordl_fixed_empty_name_whitespace) ;

/// [WeaverGenerated]
/// @brief Method CopyStateToBackingFields, addr 0x58f2d7c, size 0x4, virtual true, abstract: false, final false
inline void CopyStateToBackingFields() ;

static inline ::GlobalNamespace::GorillaSerializerMasterOnly* New_ctor() ;

/// @brief Method ValidOnSerialize, addr 0x58f4d28, size 0x64, virtual true, abstract: false, final false
inline bool ValidOnSerialize(::Photon::Pun::PhotonStream*  stream, /* [IsReadOnly] */ ::by_ref<::Photon::Pun::PhotonMessageInfo>  info) ;

/// @brief Method .ctor, addr 0x58f2d50, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GorillaSerializerMasterOnly() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GorillaSerializerMasterOnly", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GorillaSerializerMasterOnly(GorillaSerializerMasterOnly && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GorillaSerializerMasterOnly", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GorillaSerializerMasterOnly(GorillaSerializerMasterOnly const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2123};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::GorillaSerializerMasterOnly) == 0xb0, "Size mismatch!");

} // namespace end def GlobalNamespace
