#pragma once
// IWYU pragma private; include "System/ComponentModel/INotifyDataErrorInfo.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(INotifyDataErrorInfo)
namespace System::Collections {
class IEnumerable;
}
namespace System::ComponentModel {
class DataErrorsChangedEventArgs;
}
namespace System {
template<typename TEventArgs>
class EventHandler_1;
}
// Forward declare root types
namespace System::ComponentModel {
class INotifyDataErrorInfo;
}
// Write type traits
MARK_REF_T(::System::ComponentModel::INotifyDataErrorInfo*);
DEFINE_IL2CPP_CLASS(::System::ComponentModel::INotifyDataErrorInfo*, "System.ComponentModel", "INotifyDataErrorInfo");
// Dependencies 
namespace System::ComponentModel {
// Is value type: false
// CS Name: System.ComponentModel.INotifyDataErrorInfo
class CORDL_TYPE INotifyDataErrorInfo {
public:
// Declarations
 __declspec(property(get=get_HasErrors)) bool  HasErrors;

/// @brief Method GetErrors, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::System::Collections::IEnumerable* GetErrors(::StringW  propertyName) ;

/// [CompilerGenerated]
/// @brief Method add_ErrorsChanged, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void add_ErrorsChanged(::System::EventHandler_1<::System::ComponentModel::DataErrorsChangedEventArgs*>*  value) ;

/// @brief Method get_HasErrors, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool get_HasErrors() ;

/// [CompilerGenerated]
/// @brief Method remove_ErrorsChanged, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void remove_ErrorsChanged(::System::EventHandler_1<::System::ComponentModel::DataErrorsChangedEventArgs*>*  value) ;

// Ctor Parameters [CppParam { name: "", ty: "INotifyDataErrorInfo", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
INotifyDataErrorInfo(INotifyDataErrorInfo const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10248};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::ComponentModel
