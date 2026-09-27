#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/DataBindingManager_BindingDataCollection.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(DataBindingManager_BindingDataCollection)
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
class IDisposable;
}
namespace UnityEngine::UIElements {
struct BindingId;
}
namespace UnityEngine::UIElements {
class DataBindingManager_BindingData;
}
// Forward declare root types
namespace GlobalNamespace {
struct DataBindingManager_BindingDataCollection;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::DataBindingManager_BindingDataCollection);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::DataBindingManager_BindingDataCollection, "UnityEngine.UIElements", "DataBindingManager/BindingDataCollection");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.UIElements.DataBindingManager/BindingDataCollection
struct CORDL_TYPE DataBindingManager_BindingDataCollection {
public:
// Declarations
/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

/// @brief Method AddBindingData, addr 0xb7295bc, size 0x170, virtual false, abstract: false, final false
inline void AddBindingData(::UnityEngine::UIElements::DataBindingManager_BindingData*  bindingData) ;

/// @brief Method Create, addr 0xb7294e0, size 0xdc, virtual false, abstract: false, final false
static inline ::GlobalNamespace::DataBindingManager_BindingDataCollection Create() ;

/// @brief Method Dispose, addr 0xb729894, size 0xe0, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method GetBindingCount, addr 0xb72984c, size 0x48, virtual false, abstract: false, final false
inline int32_t GetBindingCount() ;

/// @brief Method GetBindings, addr 0xb72628c, size 0x8, virtual false, abstract: false, final false
inline ::System::Collections::Generic::List_1<::UnityEngine::UIElements::DataBindingManager_BindingData*>* GetBindings() ;

/// @brief Method RemoveBindingData, addr 0xb72972c, size 0x120, virtual false, abstract: false, final false
inline bool RemoveBindingData(::UnityEngine::UIElements::DataBindingManager_BindingData*  bindingData) ;

/// @brief Method TryGetBindingData, addr 0xb726340, size 0x8c, virtual false, abstract: false, final false
inline bool TryGetBindingData(/* [IsReadOnly] */ ::by_ref<::UnityEngine::UIElements::BindingId>  bindingId, ::by_ref<::UnityEngine::UIElements::DataBindingManager_BindingData*>  data) ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() ;

// Ctor Parameters []
// @brief default ctor
constexpr DataBindingManager_BindingDataCollection() ;

// Ctor Parameters [CppParam { name: "m_BindingPerId", ty: "::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::BindingId,::UnityEngine::UIElements::DataBindingManager_BindingData*>*", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_Bindings", ty: "::System::Collections::Generic::List_1<::UnityEngine::UIElements::DataBindingManager_BindingData*>*", modifiers: "", def_value: None, comment: None }]
constexpr DataBindingManager_BindingDataCollection(::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::BindingId,::UnityEngine::UIElements::DataBindingManager_BindingData*>*  m_BindingPerId, ::System::Collections::Generic::List_1<::UnityEngine::UIElements::DataBindingManager_BindingData*>*  m_Bindings) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{7199};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field m_BindingPerId, offset: 0x0, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::BindingId,::UnityEngine::UIElements::DataBindingManager_BindingData*>*  m_BindingPerId;

/// @brief Field m_Bindings, offset: 0x8, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityEngine::UIElements::DataBindingManager_BindingData*>*  m_Bindings;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::DataBindingManager_BindingDataCollection, m_BindingPerId) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DataBindingManager_BindingDataCollection, m_Bindings) == 0x8, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::DataBindingManager_BindingDataCollection) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
