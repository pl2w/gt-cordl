#pragma once
// IWYU pragma private; include "Backtrace/Unity/Model/MachineIdStorage.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(MachineIdStorage)
namespace Backtrace::Unity::Model {
class MachineIdStorage___c;
}
namespace System::Net::NetworkInformation {
class NetworkInterface;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
// Forward declare root types
namespace Backtrace::Unity::Model {
class MachineIdStorage;
}
namespace Backtrace::Unity::Model {
class MachineIdStorage___c;
}
// Write type traits
MARK_REF_T(::Backtrace::Unity::Model::MachineIdStorage*);
MARK_REF_T(::Backtrace::Unity::Model::MachineIdStorage___c*);
DEFINE_IL2CPP_CLASS(::Backtrace::Unity::Model::MachineIdStorage*, "Backtrace.Unity.Model", "MachineIdStorage");
DEFINE_IL2CPP_CLASS(::Backtrace::Unity::Model::MachineIdStorage___c*, "Backtrace.Unity.Model", "MachineIdStorage/<>c");
// Dependencies System.Object
namespace Backtrace::Unity::Model {
// Is value type: false
// CS Name: Backtrace.Unity.Model.MachineIdStorage
class CORDL_TYPE MachineIdStorage : public ::System::Object {
public:
// Declarations
using __c = ::Backtrace::Unity::Model::MachineIdStorage___c;

/// @brief Method FetchMachineIdFromStorage, addr 0x5f1556c, size 0x44, virtual false, abstract: false, final false
inline ::StringW FetchMachineIdFromStorage() ;

/// @brief Method GenerateMachineId, addr 0x5f154cc, size 0xa0, virtual false, abstract: false, final false
inline ::StringW GenerateMachineId() ;

static inline ::Backtrace::Unity::Model::MachineIdStorage* New_ctor() ;

/// @brief Method StoreMachineId, addr 0x5f1561c, size 0x4c, virtual false, abstract: false, final false
inline void StoreMachineId(::StringW  machineId) ;

/// @brief Method UseNetworkingIdentifier, addr 0x5f156d0, size 0x46c, virtual true, abstract: false, final false
inline ::StringW UseNetworkingIdentifier() ;

/// @brief Method UseUnityIdentifier, addr 0x5f15668, size 0x68, virtual true, abstract: false, final false
inline ::StringW UseUnityIdentifier() ;

/// @brief Method .ctor, addr 0x5f15bc8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MachineIdStorage() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MachineIdStorage", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MachineIdStorage(MachineIdStorage && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MachineIdStorage", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MachineIdStorage(MachineIdStorage const& ) = delete;

/// @brief Field MachineIdentifierKey offset 0xffffffff size 0x8
static constexpr ::ConstString  MachineIdentifierKey{u"backtrace-machine-id"};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{27611};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Backtrace::Unity::Model::MachineIdStorage) == 0x10, "Size mismatch!");

} // namespace end def Backtrace::Unity::Model
// [CompilerGenerated]
// Dependencies System.Object
namespace Backtrace::Unity::Model {
// Is value type: false
// CS Name: Backtrace.Unity.Model.MachineIdStorage/<>c
class CORDL_TYPE MachineIdStorage___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::Backtrace::Unity::Model::MachineIdStorage___c*  __9;

/// @brief Field <>9__5_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__5_0, put=setStaticF___9__5_0)) ::System::Func_2<::System::Net::NetworkInformation::NetworkInterface*,bool>*  __9__5_0;

static inline ::Backtrace::Unity::Model::MachineIdStorage___c* New_ctor() ;

/// @brief Method <UseNetworkingIdentifier>b__5_0, addr 0x5f15c40, size 0x30, virtual false, abstract: false, final false
inline bool _UseNetworkingIdentifier_b__5_0(::System::Net::NetworkInformation::NetworkInterface*  n) ;

/// @brief Method .ctor, addr 0x5f15c38, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::Backtrace::Unity::Model::MachineIdStorage___c* getStaticF___9() ;

static inline ::System::Func_2<::System::Net::NetworkInformation::NetworkInterface*,bool>* getStaticF___9__5_0() ;

static inline void setStaticF___9(::Backtrace::Unity::Model::MachineIdStorage___c*  value) ;

static inline void setStaticF___9__5_0(::System::Func_2<::System::Net::NetworkInformation::NetworkInterface*,bool>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MachineIdStorage___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MachineIdStorage___c", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MachineIdStorage___c(MachineIdStorage___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MachineIdStorage___c", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MachineIdStorage___c(MachineIdStorage___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{27610};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Backtrace::Unity::Model::MachineIdStorage___c) == 0x10, "Size mismatch!");

} // namespace end def Backtrace::Unity::Model
