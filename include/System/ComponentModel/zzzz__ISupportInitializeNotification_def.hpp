#pragma once
// IWYU pragma private; include "System/ComponentModel/ISupportInitializeNotification.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(ISupportInitializeNotification)
namespace System::ComponentModel {
class ISupportInitialize;
}
namespace System {
class EventHandler;
}
// Forward declare root types
namespace System::ComponentModel {
class ISupportInitializeNotification;
}
// Write type traits
MARK_REF_T(::System::ComponentModel::ISupportInitializeNotification*);
DEFINE_IL2CPP_CLASS(::System::ComponentModel::ISupportInitializeNotification*, "System.ComponentModel", "ISupportInitializeNotification");
// Dependencies 
namespace System::ComponentModel {
// Is value type: false
// CS Name: System.ComponentModel.ISupportInitializeNotification
class CORDL_TYPE ISupportInitializeNotification {
public:
// Declarations
 __declspec(property(get=get_IsInitialized)) bool  IsInitialized;

/// @brief Convert operator to "::System::ComponentModel::ISupportInitialize"
constexpr operator  ::System::ComponentModel::ISupportInitialize*() noexcept;

/// [CompilerGenerated]
/// @brief Method add_Initialized, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void add_Initialized(::System::EventHandler*  value) ;

/// @brief Method get_IsInitialized, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool get_IsInitialized() ;

/// @brief Convert to "::System::ComponentModel::ISupportInitialize"
constexpr ::System::ComponentModel::ISupportInitialize* i___System__ComponentModel__ISupportInitialize() noexcept;

/// [CompilerGenerated]
/// @brief Method remove_Initialized, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void remove_Initialized(::System::EventHandler*  value) ;

// Ctor Parameters [CppParam { name: "", ty: "ISupportInitializeNotification", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ISupportInitializeNotification(ISupportInitializeNotification const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10179};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::ComponentModel
