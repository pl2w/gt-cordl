#pragma once
// IWYU pragma private; include "GorillaTag/GuidedRefs/Internal/RelayInfo.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(RelayInfo)
namespace GorillaTag::GuidedRefs {
class IGuidedRefTargetMono;
}
namespace GorillaTag::GuidedRefs {
struct RegisteredReceiverFieldInfo;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace GorillaTag::GuidedRefs::Internal {
class RelayInfo;
}
// Write type traits
MARK_REF_T(::GorillaTag::GuidedRefs::Internal::RelayInfo*);
DEFINE_IL2CPP_CLASS(::GorillaTag::GuidedRefs::Internal::RelayInfo*, "GorillaTag.GuidedRefs.Internal", "RelayInfo");
// Dependencies System.Object
namespace GorillaTag::GuidedRefs::Internal {
// Is value type: false
// CS Name: GorillaTag.GuidedRefs.Internal.RelayInfo
class CORDL_TYPE RelayInfo : public ::System::Object {
public:
// Declarations
/// @brief Field registeredFields, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_registeredFields, put=__cordl_internal_set_registeredFields)) ::System::Collections::Generic::List_1<::GorillaTag::GuidedRefs::RegisteredReceiverFieldInfo>*  registeredFields;

/// @brief Field resolvedFields, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_resolvedFields, put=__cordl_internal_set_resolvedFields)) ::System::Collections::Generic::List_1<::GorillaTag::GuidedRefs::RegisteredReceiverFieldInfo>*  resolvedFields;

/// @brief Field targetMono, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_targetMono, put=__cordl_internal_set_targetMono)) ::GorillaTag::GuidedRefs::IGuidedRefTargetMono*  targetMono;

static inline ::GorillaTag::GuidedRefs::Internal::RelayInfo* New_ctor() ;

constexpr ::System::Collections::Generic::List_1<::GorillaTag::GuidedRefs::RegisteredReceiverFieldInfo>* const& __cordl_internal_get_registeredFields() const;

constexpr ::System::Collections::Generic::List_1<::GorillaTag::GuidedRefs::RegisteredReceiverFieldInfo>*& __cordl_internal_get_registeredFields() ;

constexpr ::System::Collections::Generic::List_1<::GorillaTag::GuidedRefs::RegisteredReceiverFieldInfo>* const& __cordl_internal_get_resolvedFields() const;

constexpr ::System::Collections::Generic::List_1<::GorillaTag::GuidedRefs::RegisteredReceiverFieldInfo>*& __cordl_internal_get_resolvedFields() ;

constexpr ::GorillaTag::GuidedRefs::IGuidedRefTargetMono* const& __cordl_internal_get_targetMono() const;

constexpr ::GorillaTag::GuidedRefs::IGuidedRefTargetMono*& __cordl_internal_get_targetMono() ;

constexpr void __cordl_internal_set_registeredFields(::System::Collections::Generic::List_1<::GorillaTag::GuidedRefs::RegisteredReceiverFieldInfo>*  value) ;

constexpr void __cordl_internal_set_resolvedFields(::System::Collections::Generic::List_1<::GorillaTag::GuidedRefs::RegisteredReceiverFieldInfo>*  value) ;

constexpr void __cordl_internal_set_targetMono(::GorillaTag::GuidedRefs::IGuidedRefTargetMono*  value) ;

/// @brief Method .ctor, addr 0x5d450ec, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr RelayInfo() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "RelayInfo", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
RelayInfo(RelayInfo && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RelayInfo", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
RelayInfo(RelayInfo const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4735};

/// @brief Field targetMono, offset: 0x10, size: 0x8, def value: None
 ::GorillaTag::GuidedRefs::IGuidedRefTargetMono*  ___targetMono;

/// @brief Field registeredFields, offset: 0x18, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::GorillaTag::GuidedRefs::RegisteredReceiverFieldInfo>*  ___registeredFields;

/// @brief Field resolvedFields, offset: 0x20, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::GorillaTag::GuidedRefs::RegisteredReceiverFieldInfo>*  ___resolvedFields;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaTag::GuidedRefs::Internal::RelayInfo, ___targetMono) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::GuidedRefs::Internal::RelayInfo, ___registeredFields) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::GuidedRefs::Internal::RelayInfo, ___resolvedFields) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GorillaTag::GuidedRefs::Internal::RelayInfo) == 0x28, "Size mismatch!");

} // namespace end def GorillaTag::GuidedRefs::Internal
