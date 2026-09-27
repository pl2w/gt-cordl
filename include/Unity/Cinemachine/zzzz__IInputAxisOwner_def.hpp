#pragma once
// IWYU pragma private; include "Unity/Cinemachine/IInputAxisOwner.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
CORDL_MODULE_EXPORT(IInputAxisOwner)
namespace GlobalNamespace {
struct IInputAxisOwner_AxisDescriptor;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
class AsyncCallback;
}
namespace System {
class IAsyncResult;
}
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
namespace Unity::Cinemachine {
struct InputAxis;
}
// Forward declare root types
namespace Unity::Cinemachine {
class AxisDescriptor_IInputAxisOwner_AxisGetter;
}
namespace Unity::Cinemachine {
class IInputAxisOwner;
}
// Write type traits
MARK_REF_T(::Unity::Cinemachine::AxisDescriptor_IInputAxisOwner_AxisGetter*);
MARK_REF_T(::Unity::Cinemachine::IInputAxisOwner*);
DEFINE_IL2CPP_CLASS(::Unity::Cinemachine::AxisDescriptor_IInputAxisOwner_AxisGetter*, "Unity.Cinemachine", "IInputAxisOwner/AxisDescriptor/AxisGetter");
DEFINE_IL2CPP_CLASS(::Unity::Cinemachine::IInputAxisOwner*, "Unity.Cinemachine", "IInputAxisOwner");
// Dependencies 
namespace Unity::Cinemachine {
// Is value type: false
// CS Name: Unity.Cinemachine.IInputAxisOwner
class CORDL_TYPE IInputAxisOwner {
public:
// Declarations
using AxisDescriptor = ::GlobalNamespace::IInputAxisOwner_AxisDescriptor;

/// @brief Method GetInputAxes, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void GetInputAxes(::System::Collections::Generic::List_1<::GlobalNamespace::IInputAxisOwner_AxisDescriptor>*  axes) ;

// Ctor Parameters [CppParam { name: "", ty: "IInputAxisOwner", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
IInputAxisOwner(IInputAxisOwner const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22327};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Unity::Cinemachine
// Dependencies System.MulticastDelegate
namespace Unity::Cinemachine {
// Is value type: false
// CS Name: Unity.Cinemachine.IInputAxisOwner/AxisDescriptor/AxisGetter
class CORDL_TYPE AxisDescriptor_IInputAxisOwner_AxisGetter : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0xaeb7bb0, size 0x1c, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke, addr 0xaeb7bcc, size 0xc, virtual true, abstract: false, final false
inline ::by_ref<::Unity::Cinemachine::InputAxis> EndInvoke(::System::IAsyncResult*  result) ;

/// @brief Method Invoke, addr 0xaeb7b9c, size 0x14, virtual true, abstract: false, final false
inline ::by_ref<::Unity::Cinemachine::InputAxis> Invoke() ;

static inline ::Unity::Cinemachine::AxisDescriptor_IInputAxisOwner_AxisGetter* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0xaeb7b00, size 0x9c, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AxisDescriptor_IInputAxisOwner_AxisGetter() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AxisDescriptor_IInputAxisOwner_AxisGetter", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
AxisDescriptor_IInputAxisOwner_AxisGetter(AxisDescriptor_IInputAxisOwner_AxisGetter && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AxisDescriptor_IInputAxisOwner_AxisGetter", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
AxisDescriptor_IInputAxisOwner_AxisGetter(AxisDescriptor_IInputAxisOwner_AxisGetter const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22324};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Unity::Cinemachine::AxisDescriptor_IInputAxisOwner_AxisGetter) == 0x80, "Size mismatch!");

} // namespace end def Unity::Cinemachine
