#pragma once
// IWYU pragma private; include "Meta/WitAi/Requests/VRequestDecodeDelegate_1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
CORDL_MODULE_EXPORT(VRequestDecodeDelegate_1)
namespace System::Threading::Tasks {
template<typename TResult>
class Task_1;
}
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
namespace UnityEngine::Networking {
class UnityWebRequest;
}
// Forward declare root types
namespace Meta::WitAi::Requests {
template<typename TValue>
class VRequestDecodeDelegate_1;
}
// Write type traits
MARK_GEN_REF_T_PTR(::Meta::WitAi::Requests::VRequestDecodeDelegate_1);
DEFINE_IL2CPP_GEN_CLASS_PTR(::Meta::WitAi::Requests::VRequestDecodeDelegate_1, "Meta.WitAi.Requests", "VRequestDecodeDelegate`1");
// Dependencies System.MulticastDelegate
namespace Meta::WitAi::Requests {
// cpp template
template<typename TValue>
// Is value type: false
// CS Name: Meta.WitAi.Requests.VRequestDecodeDelegate`1<TValue>
class CORDL_TYPE VRequestDecodeDelegate_1 : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method Invoke, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::System::Threading::Tasks::Task_1<TValue>* Invoke(::UnityEngine::Networking::UnityWebRequest*  request) ;

static inline ::Meta::WitAi::Requests::VRequestDecodeDelegate_1<TValue>* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr VRequestDecodeDelegate_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "VRequestDecodeDelegate_1", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
VRequestDecodeDelegate_1(VRequestDecodeDelegate_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "VRequestDecodeDelegate_1", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
VRequestDecodeDelegate_1(VRequestDecodeDelegate_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25593};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Meta::WitAi::Requests
