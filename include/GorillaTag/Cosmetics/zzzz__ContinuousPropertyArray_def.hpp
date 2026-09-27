#pragma once
// IWYU pragma private; include "GorillaTag/Cosmetics/ContinuousPropertyArray.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GorillaTag/Cosmetics/zzzz__ContinuousProperty_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(ContinuousPropertyArray)
namespace GorillaTag::Cosmetics {
class ContinuousPropertyArray_PropertyComparer;
}
namespace GorillaTag::Cosmetics {
class ContinuousProperty;
}
namespace System::Collections::Generic {
template<typename T>
class IComparer_1;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine {
class MaterialPropertyBlock;
}
// Forward declare root types
namespace GorillaTag::Cosmetics {
class ContinuousPropertyArray;
}
namespace GorillaTag::Cosmetics {
class ContinuousPropertyArray_PropertyComparer;
}
// Write type traits
MARK_REF_T(::GorillaTag::Cosmetics::ContinuousPropertyArray*);
MARK_REF_T(::GorillaTag::Cosmetics::ContinuousPropertyArray_PropertyComparer*);
DEFINE_IL2CPP_CLASS(::GorillaTag::Cosmetics::ContinuousPropertyArray*, "GorillaTag.Cosmetics", "ContinuousPropertyArray");
DEFINE_IL2CPP_CLASS(::GorillaTag::Cosmetics::ContinuousPropertyArray_PropertyComparer*, "GorillaTag.Cosmetics", "ContinuousPropertyArray/PropertyComparer");
// Dependencies GorillaTag.Cosmetics.ContinuousProperty, System.Object
namespace GorillaTag::Cosmetics {
// Is value type: false
// CS Name: GorillaTag.Cosmetics.ContinuousPropertyArray
class CORDL_TYPE ContinuousPropertyArray : public ::System::Object {
public:
// Declarations
using PropertyComparer = ::GorillaTag::Cosmetics::ContinuousPropertyArray_PropertyComparer;

 __declspec(property(get=get_Count)) int32_t  Count;

/// @brief Field cachedRigIsLocal, offset 0x44, size 0x1 
 __declspec(property(get=__cordl_internal_get_cachedRigIsLocal, put=__cordl_internal_set_cachedRigIsLocal)) bool  cachedRigIsLocal;

/// @brief Field initialized, offset 0x38, size 0x1 
 __declspec(property(get=__cordl_internal_get_initialized, put=__cordl_internal_set_initialized)) bool  initialized;

/// @brief Field instant, offset 0x1c, size 0x1 
 __declspec(property(get=__cordl_internal_get_instant, put=__cordl_internal_set_instant)) bool  instant;

/// @brief Field inverseMaximum, offset 0x14, size 0x4 
 __declspec(property(get=__cordl_internal_get_inverseMaximum, put=__cordl_internal_set_inverseMaximum)) float_t  inverseMaximum;

/// @brief Field lastApplyTime, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get_lastApplyTime, put=__cordl_internal_set_lastApplyTime)) float_t  lastApplyTime;

/// @brief Field list, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_list, put=__cordl_internal_set_list)) ::ArrayW<::GorillaTag::Cosmetics::ContinuousProperty*>  list;

/// @brief Field maxExpectedValue, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_maxExpectedValue, put=__cordl_internal_set_maxExpectedValue)) float_t  maxExpectedValue;

/// @brief Field mpb, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_mpb, put=__cordl_internal_set_mpb)) ::UnityEngine::MaterialPropertyBlock*  mpb;

/// @brief Field responsiveness, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_responsiveness, put=__cordl_internal_set_responsiveness)) float_t  responsiveness;

/// @brief Field uniqueShaderPropertyIndices, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_uniqueShaderPropertyIndices, put=__cordl_internal_set_uniqueShaderPropertyIndices)) ::System::Collections::Generic::List_1<int32_t>*  uniqueShaderPropertyIndices;

/// @brief Field value, offset 0x3c, size 0x4 
 __declspec(property(get=__cordl_internal_get_value, put=__cordl_internal_set_value)) float_t  value;

/// @brief Method ApplyAll, addr 0x5d7f7a0, size 0x300, virtual false, abstract: false, final false
inline void ApplyAll(float_t  f) ;

/// @brief Method ApplyAll, addr 0x5d85310, size 0x4, virtual false, abstract: false, final false
inline void ApplyAll(bool  leftHand, float_t  f) ;

/// @brief Method InitIfNeeded, addr 0x5d84ed8, size 0x364, virtual false, abstract: false, final false
inline void InitIfNeeded() ;

static inline ::GorillaTag::Cosmetics::ContinuousPropertyArray* New_ctor() ;

constexpr bool const& __cordl_internal_get_cachedRigIsLocal() const;

constexpr bool& __cordl_internal_get_cachedRigIsLocal() ;

constexpr bool const& __cordl_internal_get_initialized() const;

constexpr bool& __cordl_internal_get_initialized() ;

constexpr bool const& __cordl_internal_get_instant() const;

constexpr bool& __cordl_internal_get_instant() ;

constexpr float_t const& __cordl_internal_get_inverseMaximum() const;

constexpr float_t& __cordl_internal_get_inverseMaximum() ;

constexpr float_t const& __cordl_internal_get_lastApplyTime() const;

constexpr float_t& __cordl_internal_get_lastApplyTime() ;

constexpr ::ArrayW<::GorillaTag::Cosmetics::ContinuousProperty*> const& __cordl_internal_get_list() const;

constexpr ::ArrayW<::GorillaTag::Cosmetics::ContinuousProperty*>& __cordl_internal_get_list() ;

constexpr float_t const& __cordl_internal_get_maxExpectedValue() const;

constexpr float_t& __cordl_internal_get_maxExpectedValue() ;

constexpr ::UnityEngine::MaterialPropertyBlock* const& __cordl_internal_get_mpb() const;

constexpr ::UnityEngine::MaterialPropertyBlock*& __cordl_internal_get_mpb() ;

constexpr float_t const& __cordl_internal_get_responsiveness() const;

constexpr float_t& __cordl_internal_get_responsiveness() ;

constexpr ::System::Collections::Generic::List_1<int32_t>* const& __cordl_internal_get_uniqueShaderPropertyIndices() const;

constexpr ::System::Collections::Generic::List_1<int32_t>*& __cordl_internal_get_uniqueShaderPropertyIndices() ;

constexpr float_t const& __cordl_internal_get_value() const;

constexpr float_t& __cordl_internal_get_value() ;

constexpr void __cordl_internal_set_cachedRigIsLocal(bool  value) ;

constexpr void __cordl_internal_set_initialized(bool  value) ;

constexpr void __cordl_internal_set_instant(bool  value) ;

constexpr void __cordl_internal_set_inverseMaximum(float_t  value) ;

constexpr void __cordl_internal_set_lastApplyTime(float_t  value) ;

constexpr void __cordl_internal_set_list(::ArrayW<::GorillaTag::Cosmetics::ContinuousProperty*>  value) ;

constexpr void __cordl_internal_set_maxExpectedValue(float_t  value) ;

constexpr void __cordl_internal_set_mpb(::UnityEngine::MaterialPropertyBlock*  value) ;

constexpr void __cordl_internal_set_responsiveness(float_t  value) ;

constexpr void __cordl_internal_set_uniqueShaderPropertyIndices(::System::Collections::Generic::List_1<int32_t>*  value) ;

constexpr void __cordl_internal_set_value(float_t  value) ;

/// @brief Method .ctor, addr 0x5d85314, size 0x20, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_Count, addr 0x5d7f1ac, size 0x18, virtual false, abstract: false, final false
inline int32_t get_Count() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ContinuousPropertyArray() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ContinuousPropertyArray", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ContinuousPropertyArray(ContinuousPropertyArray && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ContinuousPropertyArray", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ContinuousPropertyArray(ContinuousPropertyArray const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4891};

/// [Tooltip("Divides the input value by this number before being fed into the property array. Unless you know what you\'re doing, you should probably leave this at 1. You can accomplish the same thing by changing the maximum X value for all the curves/gradients, this is just a shorthand.")]
/// [SerializeField]
/// @brief Field maxExpectedValue, offset: 0x10, size: 0x4, def value: None
 float_t  ___maxExpectedValue;

/// @brief Field inverseMaximum, offset: 0x14, size: 0x4, def value: None
 float_t  ___inverseMaximum;

/// [Tooltip("Determines how quickly the internal value lerps towards the input value. A low number will take a long time to match but will be more resistant to fluctuations, visa versa for a high value. A good starting point is 5 to 10.")]
/// [SerializeField]
/// @brief Field responsiveness, offset: 0x18, size: 0x4, def value: None
 float_t  ___responsiveness;

/// [Tooltip("If true (default behavior), the input value will be used directly. Disable this if you need better control over how smoothly the properties get applied.")]
/// [SerializeField]
/// @brief Field instant, offset: 0x1c, size: 0x1, def value: None
 bool  ___instant;

/// [SerializeField]
/// @brief Field list, offset: 0x20, size: 0x8, def value: None
 ::ArrayW<::GorillaTag::Cosmetics::ContinuousProperty*>  ___list;

/// @brief Field uniqueShaderPropertyIndices, offset: 0x28, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<int32_t>*  ___uniqueShaderPropertyIndices;

/// @brief Field mpb, offset: 0x30, size: 0x8, def value: None
 ::UnityEngine::MaterialPropertyBlock*  ___mpb;

/// @brief Field initialized, offset: 0x38, size: 0x1, def value: None
 bool  ___initialized;

/// @brief Field value, offset: 0x3c, size: 0x4, def value: None
 float_t  ___value;

/// @brief Field lastApplyTime, offset: 0x40, size: 0x4, def value: None
 float_t  ___lastApplyTime;

/// @brief Field cachedRigIsLocal, offset: 0x44, size: 0x1, def value: None
 bool  ___cachedRigIsLocal;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaTag::Cosmetics::ContinuousPropertyArray, ___maxExpectedValue) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::ContinuousPropertyArray, ___inverseMaximum) == 0x14, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::ContinuousPropertyArray, ___responsiveness) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::ContinuousPropertyArray, ___instant) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::ContinuousPropertyArray, ___list) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::ContinuousPropertyArray, ___uniqueShaderPropertyIndices) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::ContinuousPropertyArray, ___mpb) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::ContinuousPropertyArray, ___initialized) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::ContinuousPropertyArray, ___value) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::ContinuousPropertyArray, ___lastApplyTime) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::ContinuousPropertyArray, ___cachedRigIsLocal) == 0x44, "Offset mismatch!");

static_assert(sizeof(::GorillaTag::Cosmetics::ContinuousPropertyArray) == 0x48, "Size mismatch!");

} // namespace end def GorillaTag::Cosmetics
// Dependencies System.Object
namespace GorillaTag::Cosmetics {
// Is value type: false
// CS Name: GorillaTag.Cosmetics.ContinuousPropertyArray/PropertyComparer
class CORDL_TYPE ContinuousPropertyArray_PropertyComparer : public ::System::Object {
public:
// Declarations
/// @brief Convert operator to "::System::Collections::Generic::IComparer_1<::GorillaTag::Cosmetics::ContinuousProperty*>"
constexpr operator  ::System::Collections::Generic::IComparer_1<::GorillaTag::Cosmetics::ContinuousProperty*>*() noexcept;

/// @brief Method Compare, addr 0x5d85244, size 0xcc, virtual true, abstract: false, final true
inline int32_t Compare(::GorillaTag::Cosmetics::ContinuousProperty*  x, ::GorillaTag::Cosmetics::ContinuousProperty*  y) ;

static inline ::GorillaTag::Cosmetics::ContinuousPropertyArray_PropertyComparer* New_ctor() ;

/// @brief Method .ctor, addr 0x5d8523c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::System::Collections::Generic::IComparer_1<::GorillaTag::Cosmetics::ContinuousProperty*>"
constexpr ::System::Collections::Generic::IComparer_1<::GorillaTag::Cosmetics::ContinuousProperty*>* i___System__Collections__Generic__IComparer_1___GorillaTag__Cosmetics__ContinuousProperty__() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ContinuousPropertyArray_PropertyComparer() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ContinuousPropertyArray_PropertyComparer", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ContinuousPropertyArray_PropertyComparer(ContinuousPropertyArray_PropertyComparer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ContinuousPropertyArray_PropertyComparer", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ContinuousPropertyArray_PropertyComparer(ContinuousPropertyArray_PropertyComparer const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4890};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GorillaTag::Cosmetics::ContinuousPropertyArray_PropertyComparer) == 0x10, "Size mismatch!");

} // namespace end def GorillaTag::Cosmetics
