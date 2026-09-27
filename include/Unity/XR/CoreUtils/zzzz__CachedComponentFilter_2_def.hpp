#pragma once
// IWYU pragma private; include "Unity/XR/CoreUtils/CachedComponentFilter_2.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
CORDL_MODULE_EXPORT(CachedComponentFilter_2)
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
class IDisposable;
}
namespace Unity::XR::CoreUtils {
struct CachedSearchType;
}
namespace Unity::XR::CoreUtils {
template<typename THostType>
class IComponentHost_1;
}
// Forward declare root types
namespace Unity::XR::CoreUtils {
template<typename TFilterType,typename TRootType>
class CachedComponentFilter_2;
}
// Write type traits
MARK_GEN_REF_T_PTR(::Unity::XR::CoreUtils::CachedComponentFilter_2);
DEFINE_IL2CPP_GEN_CLASS_PTR(::Unity::XR::CoreUtils::CachedComponentFilter_2, "Unity.XR.CoreUtils", "CachedComponentFilter`2");
// Dependencies System.Object
namespace Unity::XR::CoreUtils {
// cpp template
template<typename TFilterType,typename TRootType>
// Is value type: false
// CS Name: Unity.XR.CoreUtils.CachedComponentFilter`2<TFilterType,TRootType>
class CORDL_TYPE CachedComponentFilter_2 : public ::System::Object {
public:
// Declarations
/// @brief Field k_TempComponentList, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_k_TempComponentList, put=setStaticF_k_TempComponentList)) ::System::Collections::Generic::List_1<TFilterType>*  k_TempComponentList;

/// @brief Field k_TempHostComponentList, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_k_TempHostComponentList, put=setStaticF_k_TempHostComponentList)) ::System::Collections::Generic::List_1<::Unity::XR::CoreUtils::IComponentHost_1<TFilterType>*>*  k_TempHostComponentList;

/// @brief Field m_DisposedValue, offset 0x18, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_DisposedValue, put=__cordl_internal_set_m_DisposedValue)) bool  m_DisposedValue;

/// @brief Field m_MasterComponentStorage, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_MasterComponentStorage, put=__cordl_internal_set_m_MasterComponentStorage)) ::System::Collections::Generic::List_1<TFilterType>*  m_MasterComponentStorage;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method Dispose, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method Dispose, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void Dispose(bool  disposing) ;

/// @brief Method FilteredCopyToMaster, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void FilteredCopyToMaster(bool  includeDisabled) ;

/// @brief Method FilteredCopyToMaster, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void FilteredCopyToMaster(bool  includeDisabled, TRootType  requiredRoot) ;

/// @brief Method GetMatchingComponents, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TChildType>
requires(::cordl_internals::type_constraint<TChildType, TFilterType> && ::cordl_internals::reference_type_constraint<TChildType>)
inline ::ArrayW<TChildType> GetMatchingComponents() ;

static inline ::Unity::XR::CoreUtils::CachedComponentFilter_2<TFilterType,TRootType>* New_ctor(::ArrayW<TFilterType>  componentList, bool  includeDisabled) ;

static inline ::Unity::XR::CoreUtils::CachedComponentFilter_2<TFilterType,TRootType>* New_ctor(TRootType  componentRoot, ::Unity::XR::CoreUtils::CachedSearchType  cachedSearchType, bool  includeDisabled) ;

/// @brief Method StoreMatchingComponents, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TChildType>
requires(::cordl_internals::type_constraint<TChildType, TFilterType> && ::cordl_internals::reference_type_constraint<TChildType>)
inline void StoreMatchingComponents(::System::Collections::Generic::List_1<TChildType>*  outputList) ;

constexpr bool const& __cordl_internal_get_m_DisposedValue() const;

constexpr bool& __cordl_internal_get_m_DisposedValue() ;

constexpr ::System::Collections::Generic::List_1<TFilterType>* const& __cordl_internal_get_m_MasterComponentStorage() const;

constexpr ::System::Collections::Generic::List_1<TFilterType>*& __cordl_internal_get_m_MasterComponentStorage() ;

constexpr void __cordl_internal_set_m_DisposedValue(bool  value) ;

constexpr void __cordl_internal_set_m_MasterComponentStorage(::System::Collections::Generic::List_1<TFilterType>*  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(::ArrayW<TFilterType>  componentList, bool  includeDisabled) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(TRootType  componentRoot, ::Unity::XR::CoreUtils::CachedSearchType  cachedSearchType, bool  includeDisabled) ;

static inline ::System::Collections::Generic::List_1<TFilterType>* getStaticF_k_TempComponentList() ;

static inline ::System::Collections::Generic::List_1<::Unity::XR::CoreUtils::IComponentHost_1<TFilterType>*>* getStaticF_k_TempHostComponentList() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

static inline void setStaticF_k_TempComponentList(::System::Collections::Generic::List_1<TFilterType>*  value) ;

static inline void setStaticF_k_TempHostComponentList(::System::Collections::Generic::List_1<::Unity::XR::CoreUtils::IComponentHost_1<TFilterType>*>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CachedComponentFilter_2() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CachedComponentFilter_2", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CachedComponentFilter_2(CachedComponentFilter_2 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CachedComponentFilter_2", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CachedComponentFilter_2(CachedComponentFilter_2 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30382};

/// @brief Field m_MasterComponentStorage, offset: 0x10, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<TFilterType>*  ___m_MasterComponentStorage;

/// @brief Field m_DisposedValue, offset: 0x18, size: 0x1, def value: None
 bool  ___m_DisposedValue;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Unity::XR::CoreUtils
