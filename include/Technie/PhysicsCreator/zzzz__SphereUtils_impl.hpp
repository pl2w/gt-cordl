#pragma once
// IWYU pragma private; include "Technie/PhysicsCreator/SphereUtils.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Technie/PhysicsCreator/zzzz__SphereUtils_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "Technie/PhysicsCreator/zzzz__SphereUtils_def.hpp"
#include "Technie/PhysicsCreator/zzzz__Sphere_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::Technie::PhysicsCreator::SphereUtils.PointInsideSphere
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Vector3, ::Technie::PhysicsCreator::Sphere*)>(&::Technie::PhysicsCreator::SphereUtils::PointInsideSphere)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0xadd35b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::SphereUtils*>(),
                        {"PointInsideSphere", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::Technie::PhysicsCreator::Sphere*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Technie::PhysicsCreator::SphereUtils.ExactSphere1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Technie::PhysicsCreator::Sphere* (*)(::UnityEngine::Vector3)>(&::Technie::PhysicsCreator::SphereUtils::ExactSphere1)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0xadd35fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::SphereUtils*>(),
                        {"ExactSphere1", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Technie::PhysicsCreator::SphereUtils.ExactSphere2
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Technie::PhysicsCreator::Sphere* (*)(::UnityEngine::Vector3, ::UnityEngine::Vector3)>(&::Technie::PhysicsCreator::SphereUtils::ExactSphere2)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0xadd3680;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::SphereUtils*>(),
                        {"ExactSphere2", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Technie::PhysicsCreator::SphereUtils.ExactSphere3
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Technie::PhysicsCreator::Sphere* (*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3)>(&::Technie::PhysicsCreator::SphereUtils::ExactSphere3)> {
  constexpr static std::size_t size = 0x1f0;
  constexpr static std::size_t addrs = 0xadd3758;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::SphereUtils*>(),
                        {"ExactSphere3", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Technie::PhysicsCreator::SphereUtils.ExactSphere4
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Technie::PhysicsCreator::Sphere* (*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3)>(&::Technie::PhysicsCreator::SphereUtils::ExactSphere4)> {
  constexpr static std::size_t size = 0x6ec;
  constexpr static std::size_t addrs = 0xadd3948;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::SphereUtils*>(),
                        {"ExactSphere4", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Technie::PhysicsCreator::SphereUtils.UpdateSupport1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Technie::PhysicsCreator::Sphere* (*)(int32_t, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*, ::Technie::PhysicsCreator::SphereUtils_Support*)>(&::Technie::PhysicsCreator::SphereUtils::UpdateSupport1)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0xadd4034;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::SphereUtils*>(),
                        {"UpdateSupport1", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Vector3>*>(), ::i2c::type_of<::Technie::PhysicsCreator::SphereUtils_Support*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Technie::PhysicsCreator::SphereUtils.UpdateSupport2
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Technie::PhysicsCreator::Sphere* (*)(int32_t, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*, ::Technie::PhysicsCreator::SphereUtils_Support*)>(&::Technie::PhysicsCreator::SphereUtils::UpdateSupport2)> {
  constexpr static std::size_t size = 0x30c;
  constexpr static std::size_t addrs = 0xadd411c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::SphereUtils*>(),
                        {"UpdateSupport2", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Vector3>*>(), ::i2c::type_of<::Technie::PhysicsCreator::SphereUtils_Support*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Technie::PhysicsCreator::SphereUtils.UpdateSupport3
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Technie::PhysicsCreator::Sphere* (*)(int32_t, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*, ::Technie::PhysicsCreator::SphereUtils_Support*)>(&::Technie::PhysicsCreator::SphereUtils::UpdateSupport3)> {
  constexpr static std::size_t size = 0x734;
  constexpr static std::size_t addrs = 0xadd4428;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::SphereUtils*>(),
                        {"UpdateSupport3", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Vector3>*>(), ::i2c::type_of<::Technie::PhysicsCreator::SphereUtils_Support*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Technie::PhysicsCreator::SphereUtils.UpdateSupport4
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Technie::PhysicsCreator::Sphere* (*)(int32_t, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*, ::Technie::PhysicsCreator::SphereUtils_Support*)>(&::Technie::PhysicsCreator::SphereUtils::UpdateSupport4)> {
  constexpr static std::size_t size = 0xe68;
  constexpr static std::size_t addrs = 0xadd4b5c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::SphereUtils*>(),
                        {"UpdateSupport4", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Vector3>*>(), ::i2c::type_of<::Technie::PhysicsCreator::SphereUtils_Support*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Technie::PhysicsCreator::SphereUtils.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Technie::PhysicsCreator::Sphere* (*)(int32_t, int32_t, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*, ::Technie::PhysicsCreator::SphereUtils_Support*)>(&::Technie::PhysicsCreator::SphereUtils::Update)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0xadd59c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::SphereUtils*>(),
                        {"Update", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Vector3>*>(), ::i2c::type_of<::Technie::PhysicsCreator::SphereUtils_Support*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Technie::PhysicsCreator::SphereUtils.MinSphere
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Technie::PhysicsCreator::Sphere* (*)(::System::Collections::Generic::List_1<::UnityEngine::Vector3>*)>(&::Technie::PhysicsCreator::SphereUtils::MinSphere)> {
  constexpr static std::size_t size = 0x1dc;
  constexpr static std::size_t addrs = 0xadc86cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::SphereUtils*>(),
                        {"MinSphere", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Vector3>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Technie::PhysicsCreator::SphereUtils.Shuffle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Collections::Generic::List_1<::UnityEngine::Vector3>*)>(&::Technie::PhysicsCreator::SphereUtils::Shuffle)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0xadd5a98;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::SphereUtils*>(),
                        {"Shuffle", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Vector3>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Technie::PhysicsCreator::SphereUtils._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Technie::PhysicsCreator::SphereUtils::*)()>(&::Technie::PhysicsCreator::SphereUtils::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xadd5cc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::SphereUtils*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline bool Technie::PhysicsCreator::SphereUtils::PointInsideSphere(::UnityEngine::Vector3  rkP, ::Technie::PhysicsCreator::Sphere*  rkS)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::SphereUtils*>(),
                        {"PointInsideSphere", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::Technie::PhysicsCreator::Sphere*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, rkP, rkS);
}
inline ::Technie::PhysicsCreator::Sphere* Technie::PhysicsCreator::SphereUtils::ExactSphere1(::UnityEngine::Vector3  rkP)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::SphereUtils*>(),
                        {"ExactSphere1", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Technie::PhysicsCreator::Sphere*>(nullptr, ___internal_method, rkP);
}
inline ::Technie::PhysicsCreator::Sphere* Technie::PhysicsCreator::SphereUtils::ExactSphere2(::UnityEngine::Vector3  rkP0, ::UnityEngine::Vector3  rkP1)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::SphereUtils*>(),
                        {"ExactSphere2", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Technie::PhysicsCreator::Sphere*>(nullptr, ___internal_method, rkP0, rkP1);
}
inline ::Technie::PhysicsCreator::Sphere* Technie::PhysicsCreator::SphereUtils::ExactSphere3(::UnityEngine::Vector3  rkP0, ::UnityEngine::Vector3  rkP1, ::UnityEngine::Vector3  rkP2)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::SphereUtils*>(),
                        {"ExactSphere3", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Technie::PhysicsCreator::Sphere*>(nullptr, ___internal_method, rkP0, rkP1, rkP2);
}
inline ::Technie::PhysicsCreator::Sphere* Technie::PhysicsCreator::SphereUtils::ExactSphere4(::UnityEngine::Vector3  rkP0, ::UnityEngine::Vector3  rkP1, ::UnityEngine::Vector3  rkP2, ::UnityEngine::Vector3  rkP3)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::SphereUtils*>(),
                        {"ExactSphere4", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Technie::PhysicsCreator::Sphere*>(nullptr, ___internal_method, rkP0, rkP1, rkP2, rkP3);
}
inline ::Technie::PhysicsCreator::Sphere* Technie::PhysicsCreator::SphereUtils::UpdateSupport1(int32_t  i, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  apkPerm, ::Technie::PhysicsCreator::SphereUtils_Support*  rkSupp)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::SphereUtils*>(),
                        {"UpdateSupport1", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Vector3>*>(), ::i2c::type_of<::Technie::PhysicsCreator::SphereUtils_Support*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Technie::PhysicsCreator::Sphere*>(nullptr, ___internal_method, i, apkPerm, rkSupp);
}
inline ::Technie::PhysicsCreator::Sphere* Technie::PhysicsCreator::SphereUtils::UpdateSupport2(int32_t  i, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  apkPerm, ::Technie::PhysicsCreator::SphereUtils_Support*  rkSupp)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::SphereUtils*>(),
                        {"UpdateSupport2", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Vector3>*>(), ::i2c::type_of<::Technie::PhysicsCreator::SphereUtils_Support*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Technie::PhysicsCreator::Sphere*>(nullptr, ___internal_method, i, apkPerm, rkSupp);
}
inline ::Technie::PhysicsCreator::Sphere* Technie::PhysicsCreator::SphereUtils::UpdateSupport3(int32_t  i, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  apkPerm, ::Technie::PhysicsCreator::SphereUtils_Support*  rkSupp)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::SphereUtils*>(),
                        {"UpdateSupport3", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Vector3>*>(), ::i2c::type_of<::Technie::PhysicsCreator::SphereUtils_Support*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Technie::PhysicsCreator::Sphere*>(nullptr, ___internal_method, i, apkPerm, rkSupp);
}
inline ::Technie::PhysicsCreator::Sphere* Technie::PhysicsCreator::SphereUtils::UpdateSupport4(int32_t  i, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  apkPerm, ::Technie::PhysicsCreator::SphereUtils_Support*  rkSupp)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::SphereUtils*>(),
                        {"UpdateSupport4", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Vector3>*>(), ::i2c::type_of<::Technie::PhysicsCreator::SphereUtils_Support*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Technie::PhysicsCreator::Sphere*>(nullptr, ___internal_method, i, apkPerm, rkSupp);
}
inline ::Technie::PhysicsCreator::Sphere* Technie::PhysicsCreator::SphereUtils::Update(int32_t  funcIndex, int32_t  numPoints, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  points, ::Technie::PhysicsCreator::SphereUtils_Support*  support)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::SphereUtils*>(),
                        {"Update", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Vector3>*>(), ::i2c::type_of<::Technie::PhysicsCreator::SphereUtils_Support*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Technie::PhysicsCreator::Sphere*>(nullptr, ___internal_method, funcIndex, numPoints, points, support);
}
inline ::Technie::PhysicsCreator::Sphere* Technie::PhysicsCreator::SphereUtils::MinSphere(::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  inputPoints)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::SphereUtils*>(),
                        {"MinSphere", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Vector3>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Technie::PhysicsCreator::Sphere*>(nullptr, ___internal_method, inputPoints);
}
inline void Technie::PhysicsCreator::SphereUtils::Shuffle(::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  list)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::SphereUtils*>(),
                        {"Shuffle", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Vector3>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, list);
}
inline void Technie::PhysicsCreator::SphereUtils::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::SphereUtils*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Technie::PhysicsCreator::SphereUtils* Technie::PhysicsCreator::SphereUtils::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Technie::PhysicsCreator::SphereUtils*>());
}
// Ctor Parameters []
constexpr ::Technie::PhysicsCreator::SphereUtils::SphereUtils()   {
}
//  Writing Method size for method: ::Technie::PhysicsCreator::SphereUtils_Support.Contains
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Technie::PhysicsCreator::SphereUtils_Support::*)(int32_t, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*)>(&::Technie::PhysicsCreator::SphereUtils_Support::Contains)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0xadd5bb4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::SphereUtils_Support*>(),
                        {"Contains", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Vector3>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Technie::PhysicsCreator::SphereUtils_Support._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Technie::PhysicsCreator::SphereUtils_Support::*)()>(&::Technie::PhysicsCreator::SphereUtils_Support::_ctor)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0xadd5a34;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::SphereUtils_Support*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& Technie::PhysicsCreator::SphereUtils_Support::__cordl_internal_get_m_iQuantity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_iQuantity;
}
constexpr int32_t const& Technie::PhysicsCreator::SphereUtils_Support::__cordl_internal_get_m_iQuantity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_iQuantity;
}
constexpr void Technie::PhysicsCreator::SphereUtils_Support::__cordl_internal_set_m_iQuantity(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_iQuantity = value;
}
constexpr ::ArrayW<int32_t>& Technie::PhysicsCreator::SphereUtils_Support::__cordl_internal_get_m_aiIndex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_aiIndex;
}
constexpr ::ArrayW<int32_t> const& Technie::PhysicsCreator::SphereUtils_Support::__cordl_internal_get_m_aiIndex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_aiIndex;
}
constexpr void Technie::PhysicsCreator::SphereUtils_Support::__cordl_internal_set_m_aiIndex(::ArrayW<int32_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_aiIndex = value;
}
inline bool Technie::PhysicsCreator::SphereUtils_Support::Contains(int32_t  iIndex, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  points)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::SphereUtils_Support*>(),
                        {"Contains", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Vector3>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, iIndex, points);
}
inline void Technie::PhysicsCreator::SphereUtils_Support::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::SphereUtils_Support*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Technie::PhysicsCreator::SphereUtils_Support* Technie::PhysicsCreator::SphereUtils_Support::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Technie::PhysicsCreator::SphereUtils_Support*>());
}
// Ctor Parameters []
constexpr ::Technie::PhysicsCreator::SphereUtils_Support::SphereUtils_Support()   {
}
