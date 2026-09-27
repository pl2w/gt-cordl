#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRSemanticLabels.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OVRSemanticLabels)
namespace GlobalNamespace {
template<typename T>
class IOVRAnchorComponent_1;
}
namespace GlobalNamespace {
struct OVRAnchor;
}
namespace GlobalNamespace {
struct OVRPlugin_SpaceComponentType;
}
namespace GlobalNamespace {
struct OVRSemanticLabels_Classification;
}
namespace GlobalNamespace {
template<typename TResult>
struct OVRTask_1;
}
namespace System::Collections::Generic {
template<typename T>
class ICollection_1;
}
namespace System::Collections::Generic {
template<typename T>
class IReadOnlyList_1;
}
namespace System {
template<typename T>
class IEquatable_1;
}
namespace System {
class Object;
}
namespace System {
template<typename T>
struct ReadOnlySpan_1;
}
// Forward declare root types
namespace GlobalNamespace {
struct OVRSemanticLabels;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::OVRSemanticLabels);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRSemanticLabels, "", "OVRSemanticLabels");
// [IsReadOnly]
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRSemanticLabels
struct CORDL_TYPE OVRSemanticLabels {
public:
// Declarations
using Classification = ::GlobalNamespace::OVRSemanticLabels_Classification;

 __declspec(property(get=get_Handle)) uint64_t  Handle;

 __declspec(property(get=IOVRAnchorComponent_OVRSemanticLabels__get_Handle)) uint64_t  IOVRAnchorComponent_OVRSemanticLabels__Handle;

 __declspec(property(get=IOVRAnchorComponent_OVRSemanticLabels__get_Type)) ::GlobalNamespace::OVRPlugin_SpaceComponentType  IOVRAnchorComponent_OVRSemanticLabels__Type;

 __declspec(property(get=get_IsEnabled)) bool  IsEnabled;

 __declspec(property(get=get_IsNull)) bool  IsNull;

/// @brief [Obsolete("String-based labels are deprecated (v65). Please use the equivalent enum-based methods.")]
 __declspec(property(get=get_Labels)) ::StringW  Labels;

/// @brief Field Null, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Null, put=setStaticF_Null)) ::GlobalNamespace::OVRSemanticLabels  Null;

 __declspec(property(get=get_Type)) ::GlobalNamespace::OVRPlugin_SpaceComponentType  Type;

/// @brief Field _semanticLabelsBuffer, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__semanticLabelsBuffer, put=setStaticF__semanticLabelsBuffer)) ::ArrayW<char16_t>  _semanticLabelsBuffer;

/// @brief Convert operator to "::GlobalNamespace::IOVRAnchorComponent_1<::GlobalNamespace::OVRSemanticLabels>"
constexpr operator  ::GlobalNamespace::IOVRAnchorComponent_1<::GlobalNamespace::OVRSemanticLabels>*() ;

/// @brief Convert operator to "::System::IEquatable_1<::GlobalNamespace::OVRSemanticLabels>"
constexpr operator  ::System::IEquatable_1<::GlobalNamespace::OVRSemanticLabels>*() ;

/// @brief Method Equals, addr 0xa578da8, size 0x90, virtual true, abstract: false, final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method Equals, addr 0xa578c64, size 0x68, virtual true, abstract: false, final true
inline bool Equals(::GlobalNamespace::OVRSemanticLabels  other) ;

/// @brief Method FromApiLabel, addr 0xa5794f4, size 0x644, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRSemanticLabels_Classification FromApiLabel(::System::ReadOnlySpan_1<char16_t>  singleLabel) ;

/// @brief Method FromApiString, addr 0xa579360, size 0x194, virtual false, abstract: false, final false
static inline void FromApiString(::System::ReadOnlySpan_1<char16_t>  apiLabels, ::System::Collections::Generic::ICollection_1<::GlobalNamespace::OVRSemanticLabels_Classification>*  classifications) ;

/// @brief Method GetClassifications, addr 0xa579060, size 0x300, virtual false, abstract: false, final false
inline void GetClassifications(::System::Collections::Generic::ICollection_1<::GlobalNamespace::OVRSemanticLabels_Classification>*  classifications) ;

/// @brief Method GetHashCode, addr 0xa578e38, size 0x98, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

/// @brief Method IOVRAnchorComponent<OVRSemanticLabels>.FromAnchor, addr 0xa578a48, size 0x30, virtual true, abstract: false, final true
inline ::GlobalNamespace::OVRSemanticLabels IOVRAnchorComponent_OVRSemanticLabels__FromAnchor(::GlobalNamespace::OVRAnchor  anchor) ;

/// @brief Method IOVRAnchorComponent<OVRSemanticLabels>.SetEnabledAsync, addr 0xa578c18, size 0x4c, virtual true, abstract: false, final true
inline ::GlobalNamespace::OVRTask_1<bool> IOVRAnchorComponent_OVRSemanticLabels__SetEnabledAsync(bool  enabled, double_t  timeout) ;

/// @brief Method IOVRAnchorComponent<OVRSemanticLabels>.get_Handle, addr 0xa5789f4, size 0x54, virtual true, abstract: false, final true
inline uint64_t IOVRAnchorComponent_OVRSemanticLabels__get_Handle() ;

/// @brief Method IOVRAnchorComponent<OVRSemanticLabels>.get_Type, addr 0xa57899c, size 0x50, virtual true, abstract: false, final true
inline ::GlobalNamespace::OVRPlugin_SpaceComponentType IOVRAnchorComponent_OVRSemanticLabels__get_Type() ;

/// @brief Method ToApiLabel, addr 0xa579d48, size 0x110, virtual false, abstract: false, final false
static inline ::StringW ToApiLabel(::GlobalNamespace::OVRSemanticLabels_Classification  classification) ;

/// @brief Method ToApiString, addr 0xa579e58, size 0x464, virtual false, abstract: false, final false
static inline ::StringW ToApiString(::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::OVRSemanticLabels_Classification>*  classifications) ;

/// @brief Method ToString, addr 0xa578ed0, size 0x9c, virtual true, abstract: false, final false
inline ::StringW ToString() ;

/// [CompilerGenerated]
/// @brief Method <FromApiString>g__AddLabel|30_0, addr 0xa579b38, size 0x17c, virtual false, abstract: false, final false
static inline void _FromApiString_g__AddLabel_30_0(::System::ReadOnlySpan_1<char16_t>  label, ::System::Collections::Generic::ICollection_1<::GlobalNamespace::OVRSemanticLabels_Classification>*  labels) ;

/// [CompilerGenerated]
/// @brief Method <FromApiString>g__IndexOf|30_1, addr 0xa579cb4, size 0x94, virtual false, abstract: false, final false
static inline int32_t _FromApiString_g__IndexOf_30_1(::System::ReadOnlySpan_1<char16_t>  s, char16_t  c, int32_t  start) ;

/// @brief Method .ctor, addr 0xa578a78, size 0x64, virtual false, abstract: false, final false
inline void _ctor(::GlobalNamespace::OVRAnchor  anchor) ;

static inline ::GlobalNamespace::OVRSemanticLabels getStaticF_Null() ;

static inline ::ArrayW<char16_t> getStaticF__semanticLabelsBuffer() ;

/// [CompilerGenerated]
/// @brief Method get_Handle, addr 0xa578f6c, size 0x8, virtual false, abstract: false, final false
inline uint64_t get_Handle() ;

/// @brief Method get_IsEnabled, addr 0xa578b38, size 0xe0, virtual true, abstract: false, final true
inline bool get_IsEnabled() ;

/// @brief Method get_IsNull, addr 0xa578adc, size 0x5c, virtual true, abstract: false, final true
inline bool get_IsNull() ;

/// @brief Method get_Labels, addr 0xa578f74, size 0xec, virtual false, abstract: false, final false
inline ::StringW get_Labels() ;

/// @brief Method get_Type, addr 0xa5789ec, size 0x8, virtual false, abstract: false, final false
inline ::GlobalNamespace::OVRPlugin_SpaceComponentType get_Type() ;

/// @brief Convert to "::GlobalNamespace::IOVRAnchorComponent_1<::GlobalNamespace::OVRSemanticLabels>"
constexpr ::GlobalNamespace::IOVRAnchorComponent_1<::GlobalNamespace::OVRSemanticLabels>* i___GlobalNamespace__IOVRAnchorComponent_1___GlobalNamespace__OVRSemanticLabels_() ;

/// @brief Convert to "::System::IEquatable_1<::GlobalNamespace::OVRSemanticLabels>"
constexpr ::System::IEquatable_1<::GlobalNamespace::OVRSemanticLabels>* i___System__IEquatable_1___GlobalNamespace__OVRSemanticLabels_() ;

/// @brief Method op_Equality, addr 0xa578ccc, size 0x6c, virtual false, abstract: false, final false
static inline bool op_Equality(::GlobalNamespace::OVRSemanticLabels  lhs, ::GlobalNamespace::OVRSemanticLabels  rhs) ;

/// @brief Method op_Inequality, addr 0xa578d38, size 0x70, virtual false, abstract: false, final false
static inline bool op_Inequality(::GlobalNamespace::OVRSemanticLabels  lhs, ::GlobalNamespace::OVRSemanticLabels  rhs) ;

static inline void setStaticF_Null(::GlobalNamespace::OVRSemanticLabels  value) ;

static inline void setStaticF__semanticLabelsBuffer(::ArrayW<char16_t>  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr OVRSemanticLabels() ;

// Ctor Parameters [CppParam { name: "_Handle_k__BackingField", ty: "uint64_t", modifiers: "", def_value: None, comment: None }]
constexpr OVRSemanticLabels(uint64_t  _Handle_k__BackingField) noexcept;

/// @brief Field DeprecationMessage offset 0xffffffff size 0x8
static constexpr ::ConstString  DeprecationMessage{u"String-based labels are deprecated (v65). Please use the equivalent enum-based methods."};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11854};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// [CompilerGenerated]
/// @brief Field <Handle>k__BackingField, offset: 0x0, size: 0x8, def value: None
 uint64_t  _Handle_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRSemanticLabels, _Handle_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::OVRSemanticLabels) == 0x8, "Size mismatch!");

} // namespace end def GlobalNamespace
