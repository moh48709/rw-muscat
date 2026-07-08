<!DOCTYPE html>
<html lang="ar" dir="rtl">
<head>
<meta charset="UTF-8">
<meta name="viewport" content="width=device-width, initial-scale=1.0">
<title>سجل المرأة الريفية — إدارة مسقط للثروة الزراعية وموارد المياه</title>
<link rel="preconnect" href="https://fonts.googleapis.com">
<link href="https://fonts.googleapis.com/css2?family=Aref+Ruqaa:wght@400;700&family=Amiri:wght@400;700&family=Cairo:wght@300;400;500;600;700;800&family=Reem+Kufi:wght@400;500;600&display=swap" rel="stylesheet">
<style>
  :root{
    --night:#0C2620;
    --emerald:#123A30;
    --emerald-soft:#1B4A3D;
    --gold:#C9A24B;
    --gold-deep:#A57F2C;
    --gold-light:#EAD189;
    --ivory:#FBF7EC;
    --ivory-deep:#F1E9D4;
    --sand-line:#DCCB9F;
    --ink:#22301F;
    --ink-soft:#5C6153;
    --danger:#8C3A2C;
    --ok:#3E7A4E;
    --pending:#9A6B12;
    --shadow:0 24px 60px rgba(12,38,32,.18);
  }
  *{box-sizing:border-box;}
  html,body{margin:0;padding:0;}
  body{
    background:var(--ivory);
    color:var(--ink);
    font-family:'Cairo',sans-serif;
    min-height:100vh;
  }
  ::selection{background:var(--gold);color:var(--night);}
  a{color:inherit;}

  .ornament-band{
    height:16px;
    background:
      repeating-linear-gradient(90deg, var(--gold-deep) 0 2px, transparent 2px 14px),
      linear-gradient(90deg, var(--gold-deep), var(--gold), var(--gold-light), var(--gold), var(--gold-deep));
  }
  .ornament-band.thin{height:6px;}

  /* ===== الهيدر ===== */
  header{
    background:
      radial-gradient(1200px 500px at 50% -160px, #1E5646 0%, var(--emerald) 45%, var(--night) 100%);
    color:var(--ivory);
    text-align:center;
    position:relative;
    overflow:hidden;
    padding:0;
  }
  .hero-inner{position:relative;z-index:2;padding:54px 24px 0;}
  .ministry{
    font-family:'Amiri',serif;
    font-size:clamp(15px,2.2vw,19px);
    color:var(--gold-light);
    letter-spacing:.5px;
    margin:0 0 4px;
  }
  .directorate{
    font-family:'Reem Kufi',sans-serif;
    font-size:clamp(12px,1.8vw,14.5px);
    color:#CBE3D6;
    margin:0 0 26px;
    opacity:.92;
  }
  .crest{
    width:74px;height:74px;margin:0 auto 16px;display:block;
    filter:drop-shadow(0 6px 18px rgba(201,162,75,.35));
  }
  h1.title{
    font-family:'Aref Ruqaa',serif;
    font-size:clamp(34px,6vw,62px);
    margin:0 0 12px;
    line-height:1.55;
    background:linear-gradient(180deg, var(--gold-light) 0%, var(--gold) 55%, var(--gold-deep) 100%);
    -webkit-background-clip:text;
    background-clip:text;
    color:transparent;
  }
  header p.sub{
    max-width:640px;
    margin:0 auto;
    font-size:15.5px;
    line-height:2.1;
    color:#D9E6DC;
  }
  .officer-badge{
    display:inline-flex;align-items:center;gap:10px;
    margin-top:22px;
    background:rgba(201,162,75,.12);
    border:1px solid rgba(201,162,75,.45);
    border-radius:40px;
    padding:9px 22px;
    font-family:'Reem Kufi',sans-serif;
    font-size:13px;
    color:var(--gold-light);
  }
  .officer-badge svg{flex-shrink:0;}

  .stats{display:flex;justify-content:center;gap:0;flex-wrap:wrap;margin-top:34px;}
  .stat{text-align:center;padding:6px 34px;border-inline-start:1px solid rgba(201,162,75,.28);}
  .stat:first-child{border-inline-start:none;}
  .stat b{
    display:block;font-family:'Aref Ruqaa',serif;
    font-size:34px;line-height:1.4;color:var(--gold-light);
  }
  .stat span{font-size:12px;color:#AFC6B8;font-family:'Reem Kufi',sans-serif;}

  .drive-banner{
    max-width:660px;margin:28px auto 0;
    background:rgba(255,255,255,0.06);
    border:1px solid rgba(201,162,75,0.35);
    border-radius:12px;padding:12px 18px;
    display:flex;align-items:center;justify-content:space-between;
    gap:14px;flex-wrap:wrap;font-size:13px;
    position:relative;z-index:2;
  }
  .drive-banner .status{display:flex;align-items:center;gap:10px;text-align:right;}
  .dot{width:10px;height:10px;border-radius:50%;background:#c0392b;flex-shrink:0;box-shadow:0 0 8px rgba(192,57,43,.6);}
  .dot.connected{background:#5fae6b;box-shadow:0 0 8px rgba(95,174,107,.7);}
  .drive-banner button{
    font-family:'Reem Kufi',sans-serif;
    background:transparent;border:1px solid rgba(201,162,75,0.55);
    color:var(--gold-light);padding:7px 16px;border-radius:8px;cursor:pointer;font-size:12px;
  }

  .hero-scene{display:block;width:100%;height:auto;margin-top:26px;position:relative;z-index:1;}

  /* ===== شريط الصلاحيات ===== */
  .admin-bar{
    background:var(--night);
    border-top:1px solid rgba(201,162,75,.3);
    color:#CFE0D5;
    display:flex;align-items:center;justify-content:center;
    gap:16px;flex-wrap:wrap;
    padding:12px 20px;
    font-family:'Reem Kufi',sans-serif;font-size:13px;
  }
  .admin-bar .who{display:flex;align-items:center;gap:8px;}
  .admin-bar button{
    font-family:'Reem Kufi',sans-serif;
    background:linear-gradient(135deg, var(--gold-light), var(--gold), var(--gold-deep));
    color:var(--night);border:none;padding:8px 22px;border-radius:8px;
    cursor:pointer;font-size:12.5px;font-weight:600;
    box-shadow:0 6px 16px rgba(201,162,75,.35);
  }
  .admin-bar button.ghost{
    background:transparent;color:var(--gold-light);
    border:1px solid rgba(201,162,75,.5);box-shadow:none;
  }
  .admin-chip{
    background:rgba(95,174,107,.15);border:1px solid rgba(95,174,107,.45);
    color:#9BD4A6;border-radius:20px;padding:4px 14px;font-size:12px;
  }
  .pending-chip{
    background:rgba(201,162,75,.16);border:1px solid rgba(201,162,75,.5);
    color:var(--gold-light);border-radius:20px;padding:4px 14px;font-size:12px;
  }

  .divider{display:flex;align-items:center;justify-content:center;gap:14px;margin:0 auto 34px;max-width:520px;}
  .divider::before,.divider::after{content:'';flex:1;height:1px;background:linear-gradient(90deg, transparent, var(--gold));}
  .divider::after{background:linear-gradient(90deg, var(--gold), transparent);}
  .divider svg{flex-shrink:0;}

  main{max-width:1060px;margin:0 auto;padding:58px 20px 90px;}
  section{margin-bottom:74px;}
  .section-head{text-align:center;margin-bottom:10px;}
  .section-head h2{
    font-family:'Aref Ruqaa',serif;
    font-size:clamp(26px,3.6vw,34px);
    color:var(--emerald);margin:0 0 6px;line-height:1.7;
  }
  .section-head p{color:var(--ink-soft);font-size:14.5px;margin:0 0 26px;}

  .card{
    background:#fff;border-radius:18px;box-shadow:var(--shadow);
    overflow:hidden;border:1px solid var(--sand-line);position:relative;
  }
  .card::before{
    content:'';position:absolute;inset-inline:0;top:0;height:4px;
    background:linear-gradient(90deg, var(--gold-deep), var(--gold-light), var(--gold-deep));
  }
  .card-body{padding:40px 38px 34px;}

  .review-note{
    display:flex;align-items:center;gap:10px;justify-content:center;
    background:rgba(201,162,75,.1);
    border:1px dashed var(--gold);
    border-radius:12px;padding:12px 18px;
    font-size:13px;color:var(--gold-deep);
    font-family:'Reem Kufi',sans-serif;
    max-width:640px;margin:0 auto 26px;
  }

  .grid{display:grid;grid-template-columns:1fr 1fr;gap:6px 26px;}
  .field{margin-bottom:20px;}
  .field.full{grid-column:1/-1;}
  label{
    display:block;font-family:'Reem Kufi',sans-serif;
    font-size:13.5px;color:var(--emerald);margin-bottom:8px;font-weight:600;
  }
  label .req{color:var(--danger);margin-inline-start:3px;}
  input,select,textarea{
    width:100%;font-family:'Cairo',sans-serif;font-size:15px;
    padding:12px 14px;background:var(--ivory);
    border:1.5px solid var(--sand-line);border-radius:10px;
    color:var(--ink);outline:none;
    transition:border-color .2s, box-shadow .2s, background .2s;
  }
  input:focus,select:focus,textarea:focus{
    border-color:var(--gold);background:#fff;
    box-shadow:0 0 0 3px rgba(201,162,75,0.18);
  }
  textarea{resize:vertical;min-height:100px;}

  .upload-zone{
    border:2px dashed var(--gold);border-radius:14px;
    padding:28px;text-align:center;
    background:
      radial-gradient(circle at 20% 20%, rgba(201,162,75,.08), transparent 60%),
      var(--ivory);
    cursor:pointer;position:relative;
    transition:border-color .2s, background .2s;
  }
  .upload-zone:hover{border-color:var(--gold-deep);background:#fff;}
  .upload-zone.dragover{border-color:var(--emerald);background:#F3F8F1;}
  .upload-zone input[type=file]{position:absolute;inset:0;opacity:0;cursor:pointer;}
  .upload-zone .icon{margin-bottom:8px;}
  .upload-zone .txt{font-size:13.5px;color:var(--ink-soft);}
  .upload-zone .txt b{color:var(--emerald);}

  .thumbs{display:flex;flex-wrap:wrap;gap:10px;margin-top:14px;}
  .thumb{
    width:78px;height:78px;border-radius:10px;overflow:hidden;
    position:relative;border:2px solid var(--gold);
    box-shadow:0 6px 14px rgba(12,38,32,.15);
  }
  .thumb img{width:100%;height:100%;object-fit:cover;display:block;}
  .thumb .rm{
    position:absolute;top:3px;left:3px;width:20px;height:20px;border-radius:50%;
    background:rgba(12,38,32,0.65);color:#fff;
    display:flex;align-items:center;justify-content:center;
    font-size:11px;cursor:pointer;border:none;
  }

  .actions{
    display:flex;justify-content:space-between;align-items:center;
    margin-top:10px;padding-top:22px;
    border-top:1px dashed var(--sand-line);
    flex-wrap:wrap;gap:14px;
  }
  .hint{font-size:12.5px;color:var(--ink-soft);}
  button.submit{
    font-family:'Reem Kufi',sans-serif;font-size:16px;font-weight:600;
    background:linear-gradient(135deg, var(--gold-light) 0%, var(--gold) 50%, var(--gold-deep) 100%);
    color:var(--night);border:none;padding:14px 42px;border-radius:12px;cursor:pointer;
    letter-spacing:.4px;
    transition:transform .15s, box-shadow .2s;
    box-shadow:0 12px 26px rgba(165,127,44,0.4);
  }
  button.submit:hover{transform:translateY(-2px);box-shadow:0 16px 32px rgba(165,127,44,0.5);}
  button.submit:disabled{opacity:0.6;cursor:progress;transform:none;}

  /* ===== المعرض ===== */
  .gallery-head{
    display:flex;justify-content:space-between;align-items:center;
    margin:0 0 22px;flex-wrap:wrap;gap:12px;
  }
  .gallery-head h3{
    font-family:'Aref Ruqaa',serif;
    color:var(--emerald);font-size:26px;margin:0;line-height:1.7;
  }
  .filter-row{display:flex;gap:8px;flex-wrap:wrap;}
  .filter-row button{
    font-family:'Reem Kufi',sans-serif;font-size:11.5px;
    background:#fff;border:1.5px solid var(--sand-line);
    color:var(--ink);padding:7px 14px;border-radius:20px;cursor:pointer;
    transition:all .15s;
  }
  .filter-row button.active{background:var(--emerald);color:var(--gold-light);border-color:var(--emerald);}

  .grid-gallery{display:grid;grid-template-columns:repeat(auto-fill,minmax(240px,1fr));gap:22px;}
  .proj-card{
    background:#fff;border-radius:16px;overflow:hidden;
    box-shadow:0 14px 32px rgba(12,38,32,0.12);
    border:1px solid var(--sand-line);
    display:flex;flex-direction:column;
    transition:transform .2s, box-shadow .2s;
  }
  .proj-card:hover{transform:translateY(-4px);box-shadow:0 20px 44px rgba(12,38,32,0.18);}
  .proj-card.is-pending{border:1.5px solid var(--gold);}
  .proj-photos{
    display:grid;grid-template-columns:1fr 1fr;gap:2px;
    background:var(--ivory-deep);height:150px;
  }
  .proj-photos img{width:100%;height:100%;object-fit:cover;display:block;}
  .proj-photos.single{grid-template-columns:1fr;}
  .proj-photos.empty{
    display:flex;align-items:center;justify-content:center;
    color:#A99B72;font-size:12px;font-family:'Reem Kufi',sans-serif;
  }
  .proj-info{padding:16px 16px 18px;flex:1;display:flex;flex-direction:column;}
  .proj-info .badges{display:flex;gap:6px;flex-wrap:wrap;margin-bottom:9px;}
  .proj-info .badge{
    font-family:'Reem Kufi',sans-serif;font-size:10.5px;
    background:rgba(201,162,75,0.16);color:var(--gold-deep);
    border:1px solid rgba(201,162,75,.35);
    padding:3px 12px;border-radius:20px;
  }
  .status-chip{
    font-family:'Reem Kufi',sans-serif;font-size:10.5px;
    padding:3px 12px;border-radius:20px;
  }
  .status-chip.pending{background:rgba(154,107,18,.12);color:var(--pending);border:1px solid rgba(154,107,18,.4);}
  .status-chip.approved{background:rgba(62,122,78,.12);color:var(--ok);border:1px solid rgba(62,122,78,.4);}
  .status-chip.rejected{background:rgba(140,58,44,.1);color:var(--danger);border:1px solid rgba(140,58,44,.35);}
  .proj-info h4{margin:0 0 4px;font-size:16px;color:var(--ink);font-family:'Amiri',serif;}
  .proj-info .meta{font-size:12px;color:var(--ink-soft);margin-bottom:8px;line-height:1.9;}
  .proj-info p{font-size:13px;color:#4d5344;line-height:1.75;margin:0 0 10px;flex:1;}
  .proj-info .foot{
    display:flex;justify-content:space-between;align-items:center;
    font-size:11px;color:#A99B72;
    border-top:1px dashed var(--sand-line);padding-top:10px;gap:8px;flex-wrap:wrap;
  }
  .approve-row{display:flex;gap:8px;margin-top:10px;}
  .approve-row button{
    flex:1;font-family:'Reem Kufi',sans-serif;font-size:12px;
    border:none;border-radius:8px;padding:8px 0;cursor:pointer;font-weight:600;
  }
  .approve-row .ok{background:var(--ok);color:#fff;}
  .approve-row .no{background:transparent;color:var(--danger);border:1px solid rgba(140,58,44,.4);}
  .proj-info .del{background:none;border:none;color:var(--danger);cursor:pointer;font-size:12px;}

  /* معرض الفعاليات */
  .events-grid{display:grid;grid-template-columns:repeat(auto-fill,minmax(300px,1fr));gap:24px;}
  .event-card{
    border-radius:18px;overflow:hidden;position:relative;
    box-shadow:0 16px 38px rgba(12,38,32,.16);
    border:1px solid var(--sand-line);
    background:var(--night);
    min-height:260px;display:flex;align-items:flex-end;
    transition:transform .2s;
  }
  .event-card:hover{transform:translateY(-4px);}
  .event-card .bg{position:absolute;inset:0;width:100%;height:100%;object-fit:cover;display:block;}
  .event-card .veil{
    position:absolute;inset:0;
    background:linear-gradient(180deg, rgba(12,38,32,0) 30%, rgba(12,38,32,.88) 100%);
  }
  .event-card .content{position:relative;z-index:2;padding:20px 20px 18px;color:var(--ivory);width:100%;}
  .event-card .tag{
    font-family:'Reem Kufi',sans-serif;font-size:10.5px;
    color:var(--gold-light);border:1px solid rgba(201,162,75,.55);
    border-radius:20px;padding:3px 12px;display:inline-block;margin-bottom:8px;
    background:rgba(12,38,32,.35);
  }
  .event-card h4{font-family:'Amiri',serif;font-size:19px;margin:0 0 5px;color:#fff;}
  .event-card p{font-size:12.5px;line-height:1.8;margin:0;color:#D9E6DC;}
  .event-card .ev-foot{
    display:flex;justify-content:space-between;align-items:center;margin-top:10px;
    font-size:11px;color:var(--gold-light);font-family:'Reem Kufi',sans-serif;
  }
  .event-card .del{background:none;border:none;color:#E8A79A;cursor:pointer;font-size:11.5px;}

  .locked-inline{
    text-align:center;background:linear-gradient(180deg,#fff, var(--ivory));
    border:1px dashed var(--gold);border-radius:16px;
    padding:26px 20px;margin-bottom:34px;
    color:var(--ink-soft);font-size:13.5px;
    font-family:'Reem Kufi',sans-serif;
  }

  .empty-state{
    text-align:center;padding:54px 20px;color:var(--ink-soft);
    background:#fff;border-radius:16px;border:1px dashed var(--gold);
    grid-column:1/-1;
  }

  /* ===== النوافذ ===== */
  .overlay{
    position:fixed;inset:0;background:rgba(12,38,32,0.82);
    display:none;align-items:center;justify-content:center;z-index:60;padding:20px;
    backdrop-filter:blur(3px);
  }
  .overlay.show{display:flex;}
  .modal{
    background:var(--ivory);border-radius:18px;padding:38px 36px;
    max-width:430px;width:100%;text-align:center;
    box-shadow:0 34px 80px rgba(0,0,0,0.55);
    border:1px solid var(--gold);position:relative;
  }
  .modal::before{
    content:'';position:absolute;inset-inline:0;top:0;height:4px;border-radius:18px 18px 0 0;
    background:linear-gradient(90deg, var(--gold-deep), var(--gold-light), var(--gold-deep));
  }
  .modal h3{font-family:'Aref Ruqaa',serif;color:var(--emerald);font-size:23px;margin:0 0 10px;line-height:1.7;}
  .modal p{font-size:14px;color:var(--ink-soft);line-height:1.95;margin:0 0 22px;}
  .modal button{
    font-family:'Reem Kufi',sans-serif;
    background:var(--emerald);color:var(--ivory);
    border:none;padding:11px 30px;border-radius:10px;cursor:pointer;font-size:14px;
  }
  .modal button.gold{
    background:linear-gradient(135deg, var(--gold-light), var(--gold), var(--gold-deep));
    color:var(--night);font-weight:600;
  }
  .modal input[type=password]{margin-bottom:16px;text-align:center;letter-spacing:2px;}
  .modal .err{color:var(--danger);font-size:12.5px;min-height:18px;margin:-8px 0 10px;}
  .setup-modal{max-width:540px;text-align:right;}
  .setup-modal code{
    background:#EDE2C6;padding:2px 7px;border-radius:5px;font-size:12.5px;direction:ltr;display:inline-block;
  }

  footer{
    background:var(--night);color:#AFC6B8;
    text-align:center;padding:34px 20px;font-size:12.5px;line-height:2.1;
  }
  footer b{color:var(--gold-light);font-family:'Reem Kufi',sans-serif;font-weight:500;}

  @media(max-width:640px){
    .grid{grid-template-columns:1fr;}
    .card-body{padding:26px 20px;}
    .stat{padding:6px 20px;}
  }
  @media (prefers-reduced-motion: reduce){
    *{transition:none !important;animation:none !important;}
  }
</style>
</head>
<body>

<div class="ornament-band"></div>

<header>
  <div class="hero-inner">
    <svg class="crest" viewBox="0 0 100 100" xmlns="http://www.w3.org/2000/svg" aria-hidden="true">
      <defs>
        <linearGradient id="goldGrad" x1="0" y1="0" x2="0" y2="1">
          <stop offset="0" stop-color="#EAD189"/><stop offset=".55" stop-color="#C9A24B"/><stop offset="1" stop-color="#A57F2C"/>
        </linearGradient>
      </defs>
      <path d="M50 4 C68 20 88 22 88 48 C88 74 68 90 50 96 C32 90 12 74 12 48 C12 22 32 20 50 4 Z" fill="none" stroke="url(#goldGrad)" stroke-width="2.5"/>
      <g fill="url(#goldGrad)">
        <path d="M50 22 L56.5 40 L75 40.5 L60.5 52 L66 70 L50 59.5 L34 70 L39.5 52 L25 40.5 L43.5 40 Z" opacity=".95"/>
      </g>
      <circle cx="50" cy="49" r="6.5" fill="#0C2620" stroke="url(#goldGrad)" stroke-width="1.6"/>
    </svg>

    <p class="ministry">وزارة الثروة الزراعية والسمكية وموارد المياه</p>
    <p class="directorate">إدارة مسقط للثروة الزراعية وموارد المياه — قسم تنمية المرأة الريفية</p>

    <h1 class="title">سجل المرأة الريفية العمانية</h1>
    <p class="sub">منصة رسمية لاستقبال طلبات المستفيدات وتوثيق مشاريع وأنشطة المرأة الريفية في محافظة مسقط — سجلي طلبك من هاتفك ويصلك بعد اعتماده في السجل العام.</p>

    <div class="officer-badge">
      <svg width="16" height="16" viewBox="0 0 24 24" fill="none" stroke="#EAD189" stroke-width="2" aria-hidden="true">
        <circle cx="12" cy="8" r="4"/><path d="M4 21c0-4 3.6-7 8-7s8 3 8 7"/>
      </svg>
      مسؤولة النظام: عائشة الراشدية — فنية المرأة الريفية بمركز السيب
    </div>

    <div class="stats">
      <div class="stat"><b id="statTotal">0</b><span>طلب معتمد</span></div>
      <div class="stat"><b id="statWilayats">0</b><span>ولاية مشاركة</span></div>
      <div class="stat"><b id="statPhotos">0</b><span>صورة موثّقة</span></div>
      <div class="stat"><b id="statEvents">0</b><span>فعالية ونشاط</span></div>
    </div>

    <div class="drive-banner">
      <div class="status">
        <span class="dot" id="driveDot"></span>
        <span id="driveStatusText">جاري التحقق من الاتصال بالسجل المركزي...</span>
      </div>
      <button id="driveSetupBtn">كيف يعمل الربط؟</button>
    </div>
  </div>

  <!-- مشهد عماني: قلعة، نخيل، جبال الحجر، هلال ذهبي — رسم مدمج -->
  <svg class="hero-scene" viewBox="0 0 1440 300" xmlns="http://www.w3.org/2000/svg" preserveAspectRatio="xMidYMax slice" aria-hidden="true">
    <defs>
      <linearGradient id="sky" x1="0" y1="0" x2="0" y2="1">
        <stop offset="0" stop-color="#123A30" stop-opacity="0"/>
        <stop offset="1" stop-color="#0C2620"/>
      </linearGradient>
      <linearGradient id="mount1" x1="0" y1="0" x2="0" y2="1">
        <stop offset="0" stop-color="#1B4A3D"/><stop offset="1" stop-color="#123A30"/>
      </linearGradient>
      <linearGradient id="mount2" x1="0" y1="0" x2="0" y2="1">
        <stop offset="0" stop-color="#0F332A"/><stop offset="1" stop-color="#0C2620"/>
      </linearGradient>
      <linearGradient id="goldLine" x1="0" y1="0" x2="1" y2="0">
        <stop offset="0" stop-color="#A57F2C"/><stop offset=".5" stop-color="#EAD189"/><stop offset="1" stop-color="#A57F2C"/>
      </linearGradient>
    </defs>

    <rect width="1440" height="300" fill="url(#sky)"/>
    <g fill="#EAD189" opacity=".8">
      <circle cx="140" cy="40" r="1.6"/><circle cx="260" cy="90" r="1.1"/><circle cx="420" cy="35" r="1.3"/>
      <circle cx="580" cy="70" r="1"/><circle cx="900" cy="45" r="1.4"/><circle cx="1060" cy="95" r="1.1"/>
      <circle cx="1220" cy="40" r="1.6"/><circle cx="1340" cy="85" r="1.2"/><circle cx="740" cy="30" r="1.2"/>
    </g>
    <g transform="translate(1150,70)">
      <circle r="34" fill="#EAD189" opacity=".95"/>
      <circle cx="13" cy="-8" r="30" fill="#0F332A"/>
      <circle r="34" fill="none" stroke="#C9A24B" stroke-width="1.4" opacity=".7"/>
    </g>
    <path d="M0 210 L120 150 L230 200 L340 130 L470 205 L600 155 L720 210 L1440 210 L1440 300 L0 300 Z" fill="url(#mount1)"/>
    <path d="M600 230 L760 165 L880 225 L1010 150 L1150 230 L1290 175 L1440 235 L1440 300 L600 300 Z" fill="url(#mount2)"/>
    <g transform="translate(660,138)">
      <path d="M0 132 L0 52 Q22 38 44 52 L44 132 Z" fill="#0C2620" stroke="#C9A24B" stroke-width="1.6"/>
      <g stroke="#C9A24B" stroke-width="1.6" fill="#0C2620">
        <rect x="-3" y="40" width="8" height="12"/><rect x="12" y="34" width="8" height="12"/>
        <rect x="27" y="34" width="8" height="12"/><rect x="40" y="40" width="8" height="12"/>
      </g>
      <rect x="17" y="82" width="10" height="18" rx="5" fill="#EAD189" opacity=".85"/>
      <rect x="44" y="86" width="120" height="46" fill="#0C2620" stroke="#C9A24B" stroke-width="1.6"/>
      <g stroke="#C9A24B" stroke-width="1.4" fill="#0C2620">
        <rect x="52" y="78" width="9" height="9"/><rect x="70" y="78" width="9" height="9"/>
        <rect x="88" y="78" width="9" height="9"/><rect x="106" y="78" width="9" height="9"/>
        <rect x="124" y="78" width="9" height="9"/><rect x="142" y="78" width="9" height="9"/>
      </g>
      <path d="M92 132 L92 108 Q104 98 116 108 L116 132 Z" fill="#08170F" stroke="#C9A24B" stroke-width="1.3"/>
      <rect x="164" y="56" width="40" height="76" fill="#0C2620" stroke="#C9A24B" stroke-width="1.6"/>
      <g stroke="#C9A24B" stroke-width="1.4" fill="#0C2620">
        <rect x="162" y="46" width="9" height="11"/><rect x="180" y="46" width="9" height="11"/><rect x="197" y="46" width="9" height="11"/>
      </g>
      <rect x="178" y="72" width="11" height="15" rx="5" fill="#EAD189" opacity=".85"/>
      <line x1="184" y1="46" x2="184" y2="14" stroke="#C9A24B" stroke-width="2"/>
      <path d="M184 14 L214 20 L184 27 Z" fill="#EAD189"/>
    </g>
    <g stroke="#C9A24B" fill="none" stroke-width="2" stroke-linecap="round">
      <g transform="translate(320,182)">
        <path d="M0 88 C2 50 4 28 6 8"/>
        <path d="M6 8 C-14 0 -30 4 -40 14 M6 8 C-8 -8 -24 -10 -36 -6 M6 8 C4 -12 -4 -24 -16 -30 M6 8 C14 -12 24 -20 38 -22 M6 8 C22 -4 36 -4 46 4 M6 8 C24 6 38 12 46 22"/>
      </g>
      <g transform="translate(1020,190) scale(.85)">
        <path d="M0 88 C-2 50 -4 28 -6 8"/>
        <path d="M-6 8 C-26 0 -40 6 -50 16 M-6 8 C-18 -10 -34 -12 -46 -8 M-6 8 C-8 -12 -16 -26 -28 -32 M-6 8 C2 -12 12 -22 26 -24 M-6 8 C10 -4 26 -4 36 4 M-6 8 C12 6 26 12 34 22"/>
      </g>
    </g>
    <rect x="0" y="270" width="1440" height="2.5" fill="url(#goldLine)"/>
    <g fill="#C9A24B" opacity=".9"><path d="M0 276 h1440 v1 h-1440 z" opacity=".35"/></g>
  </svg>
</header>

<div class="ornament-band thin"></div>

<!-- شريط الصلاحيات -->
<div class="admin-bar" id="adminBar">
  <span class="who">
    <svg width="15" height="15" viewBox="0 0 24 24" fill="none" stroke="#C9A24B" stroke-width="2" aria-hidden="true">
      <rect x="4" y="10" width="16" height="10" rx="2"/><path d="M8 10V7a4 4 0 0 1 8 0v3"/>
    </svg>
    <span id="roleText">أهلاً بك — يمكنك تسجيل طلبك أدناه، ويظهر في السجل العام بعد اعتماده</span>
  </span>
  <span class="pending-chip" id="pendingChip" style="display:none;"></span>
  <button id="loginBtn">دخول مديرة النظام</button>
</div>

<main>

  <!-- ═══════ تسجيل طلب جديد (متاح للمستفيدات) ═══════ -->
  <section id="registerSection">
    <div class="divider" aria-hidden="true">
      <svg width="26" height="26" viewBox="0 0 24 24" fill="#C9A24B"><path d="M12 1 L14.6 6.6 L20.5 4.9 L18.8 10.8 L24 12 L18.8 13.2 L20.5 19.1 L14.6 17.4 L12 23 L9.4 17.4 L3.5 19.1 L5.2 13.2 L0 12 L5.2 10.8 L3.5 4.9 L9.4 6.6 Z"/></svg>
    </div>
    <div class="section-head">
      <h2>سجّلي طلبك</h2>
      <p>عزيزتي المستفيدة: عبّئي بيانات طلبك وأرفقي الصور، وسيُراجع من قبل مسؤولة النظام</p>
    </div>

    <div class="review-note" id="reviewNote">
      <svg width="18" height="18" viewBox="0 0 24 24" fill="none" stroke="#A57F2C" stroke-width="2" aria-hidden="true">
        <circle cx="12" cy="12" r="9"/><path d="M12 7v5l3 3"/>
      </svg>
      يُعرض الطلب في السجل العام بعد اعتماده من مديرة النظام — بياناتك الشخصية (الرقم المدني والهاتف) لا تظهر للزوار.
    </div>

    <div class="card" id="registerCard">
      <div class="card-body">
        <form id="regForm">
          <div class="grid">
            <div class="field">
              <label>اسم المستفيدة <span class="req">*</span></label>
              <input type="text" id="f_name" required placeholder="مثال: فاطمة بنت سالم الريامية">
            </div>
            <div class="field">
              <label>الرقم المدني للمستفيدة <span class="req">*</span></label>
              <input type="text" id="f_civil" required inputmode="numeric" pattern="[0-9]{5,12}" title="أدخلي الرقم المدني بالأرقام فقط" placeholder="مثال: 12345678">
            </div>
            <div class="field">
              <label>رقم التواصل <span class="req">*</span></label>
              <input type="tel" id="f_phone" required placeholder="9xxxxxxx">
            </div>
            <div class="field">
              <label>الولاية / المنطقة <span class="req">*</span></label>
              <input type="text" id="f_wilayat" required placeholder="مثال: السيب، بوشر، قريات...">
            </div>
            <div class="field full">
              <label>نوع الطلب <span class="req">*</span></label>
              <select id="f_type" required>
                <option value="">اختاري نوع الطلب...</option>
                <option>تأهيل حظيرة حيوانات (أبقار / أغنام)</option>
                <option>تأهيل حظيرة دواجن</option>
                <option>خلية نحل</option>
                <option>معدات زراعية</option>
                <option>معدات حيوانية</option>
                <option>تسجيل حضور ورشة أو ندوة</option>
                <option>المشاركة في معارض المرأة الريفية</option>
                <option>برامج أخرى</option>
              </select>
            </div>
            <div class="field full">
              <label>تفاصيل الطلب <span class="req">*</span></label>
              <textarea id="f_details" required placeholder="وصف الطلب، حالة المشروع، الاحتياجات..."></textarea>
            </div>
            <div class="field full">
              <label>صور الطلب / المشروع</label>
              <div class="upload-zone" id="uploadZone">
                <input type="file" id="f_photos" accept="image/*" multiple>
                <div class="icon">
                  <svg width="34" height="34" viewBox="0 0 24 24" fill="none" stroke="#C9A24B" stroke-width="1.6" aria-hidden="true">
                    <rect x="3" y="6" width="18" height="14" rx="2"/><circle cx="12" cy="13" r="3.4"/><path d="M8 6l1.5-2.5h5L16 6"/>
                  </svg>
                </div>
                <div class="txt"><b>اضغطي لاختيار الصور</b> أو اسحبيها هنا — يمكن اختيار أكثر من صورة</div>
              </div>
              <div class="thumbs" id="thumbs"></div>
            </div>
          </div>
          <div class="actions">
            <span class="hint" id="saveHint">جاري التحقق من الاتصال بالسجل المركزي...</span>
            <button type="submit" class="submit" id="submitBtn">إرسال الطلب</button>
          </div>
        </form>
      </div>
    </div>
  </section>

  <!-- ═══════ سجل الطلبات ═══════ -->
  <section>
    <div class="divider" aria-hidden="true">
      <svg width="26" height="26" viewBox="0 0 24 24" fill="#C9A24B"><path d="M12 1 L14.6 6.6 L20.5 4.9 L18.8 10.8 L24 12 L18.8 13.2 L20.5 19.1 L14.6 17.4 L12 23 L9.4 17.4 L3.5 19.1 L5.2 13.2 L0 12 L5.2 10.8 L3.5 4.9 L9.4 6.6 Z"/></svg>
    </div>
    <div class="gallery-head">
      <h3 id="galleryTitle">سجل الطلبات المعتمدة</h3>
      <div class="filter-row" id="filterRow">
        <button data-f="all" class="active">الكل</button>
      </div>
    </div>
    <div id="galleryList" class="grid-gallery"></div>
  </section>

  <!-- ═══════ الفعاليات والأنشطة ═══════ -->
  <section id="eventsSection">
    <div class="divider" aria-hidden="true">
      <svg width="26" height="26" viewBox="0 0 24 24" fill="#C9A24B"><path d="M12 1 L14.6 6.6 L20.5 4.9 L18.8 10.8 L24 12 L18.8 13.2 L20.5 19.1 L14.6 17.4 L12 23 L9.4 17.4 L3.5 19.1 L5.2 13.2 L0 12 L5.2 10.8 L3.5 4.9 L9.4 6.6 Z"/></svg>
    </div>
    <div class="section-head">
      <h2>فعاليات وأنشطة المرأة الريفية</h2>
      <p>صور وتوثيق للورش والندوات والمعارض — متاحة للاطلاع للجميع، ونشرها من صلاحيات مديرة النظام</p>
    </div>

    <div class="locked-inline" id="eventsLocked">نشر الفعاليات وصورها من صلاحيات مديرة النظام</div>

    <div class="card" id="eventFormCard" style="display:none;margin-bottom:34px;">
      <div class="card-body">
        <form id="eventForm">
          <div class="grid">
            <div class="field">
              <label>عنوان الفعالية / النشاط <span class="req">*</span></label>
              <input type="text" id="e_title" required placeholder="مثال: ورشة تربية النحل — مركز السيب">
            </div>
            <div class="field">
              <label>تاريخ الفعالية</label>
              <input type="date" id="e_date">
            </div>
            <div class="field full">
              <label>وصف مختصر</label>
              <textarea id="e_details" placeholder="نبذة عن الفعالية والمشاركات والأثر..."></textarea>
            </div>
            <div class="field full">
              <label>صور الفعالية <span class="req">*</span></label>
              <div class="upload-zone" id="eventUploadZone">
                <input type="file" id="e_photos" accept="image/*" multiple>
                <div class="icon">
                  <svg width="34" height="34" viewBox="0 0 24 24" fill="none" stroke="#C9A24B" stroke-width="1.6" aria-hidden="true">
                    <rect x="3" y="6" width="18" height="14" rx="2"/><circle cx="12" cy="13" r="3.4"/><path d="M8 6l1.5-2.5h5L16 6"/>
                  </svg>
                </div>
                <div class="txt"><b>أضيفي صور الفعالية</b> — ستظهر في المعرض العام للجميع</div>
              </div>
              <div class="thumbs" id="eventThumbs"></div>
            </div>
          </div>
          <div class="actions">
            <span class="hint">تُنشر الفعالية في المعرض العام فور حفظها</span>
            <button type="submit" class="submit" id="eventSubmitBtn">نشر الفعالية</button>
          </div>
        </form>
      </div>
    </div>

    <div id="eventsList" class="events-grid"></div>
  </section>

</main>

<footer>
  <b>وزارة الثروة الزراعية والسمكية وموارد المياه</b><br>
  إدارة مسقط للثروة الزراعية وموارد المياه — قسم تنمية المرأة الريفية<br>
  سجل رقمي رسمي لاستقبال طلبات المستفيدات وتوثيق مشاريع وفعاليات المرأة الريفية العمانية
</footer>

<!-- نافذة دخول مديرة النظام -->
<div class="overlay" id="loginOverlay">
  <div class="modal">
    <svg width="40" height="40" viewBox="0 0 24 24" fill="none" stroke="#C9A24B" stroke-width="1.6" style="margin-bottom:8px;" aria-hidden="true">
      <circle cx="8" cy="14" r="4.5"/><path d="M11 11 L21 3 M17 7 L20 10 M14.5 9.5 L17 12"/>
    </svg>
    <h3>دخول مديرة النظام</h3>
    <p>أدخلي كلمة المرور لتفعيل صلاحيات الاعتماد ونشر الفعاليات.</p>
    <input type="password" id="adminPass" placeholder="كلمة المرور" autocomplete="current-password">
    <div class="err" id="loginErr"></div>
    <button class="gold" id="doLoginBtn">دخول</button>
    &nbsp;
    <button id="loginClose" style="background:transparent;color:var(--ink-soft);border:1px solid var(--sand-line);">إلغاء</button>
  </div>
</div>

<!-- ختم النجاح -->
<div class="overlay" id="successOverlay">
  <div class="modal">
    <h3 id="successTitle">تم الإرسال بنجاح 🌿</h3>
    <p id="successText">تم حفظ البيانات بنجاح.</p>
    <button id="successClose">حسناً</button>
  </div>
</div>

<!-- نافذة تعليمات الربط -->
<div class="overlay" id="setupOverlay">
  <div class="modal setup-modal">
    <h3>كيف يعمل ربط السجل؟</h3>
    <p>الموقع مربوط بسكربت Google Apps Script يعمل تحت حساب <code>woman.acri2026@gmail.com</code>. طلبات المستفيدات تُحفظ بحالة "بانتظار الاعتماد" ولا تظهر في السجل العام إلا بعد اعتماد مديرة النظام. الصور تُرفع إلى Google Drive والبيانات إلى Google Sheet.</p>
    <p>التحقق من كلمة مرور المديرة يتم في الخادم، والبيانات الشخصية للمستفيدات (الرقم المدني والهاتف) لا تُرسل للزوار إطلاقاً.</p>
    <button id="setupClose">فهمت، إغلاق</button>
  </div>
</div>

<script>
/* ============================================================
   إعداد الربط — رابط نشر Google Apps Script (woman.acri2026@gmail.com)
   ============================================================ */
const APPS_SCRIPT_URL = 'https://script.google.com/macros/s/AKfycbyn_ySOT5PVmmANgUfyMTlxhQ4xE8svsoa_6-EwaijvFlvYZqkM2h4KkVokDyU8diJGpQ/exec';

/* كلمة المرور تُتحقق في الخادم (السكربت). هذا الهاش احتياطي
   للوضع المحلي فقط عند انقطاع الاتصال. الافتراضية: Aisha@2026 */
const LOCAL_ADMIN_HASH = '635eef39c705ff91932954bc9c5bbfb79df45b5c3e2eaf925eacdffad9a3ae69';
const SESSION_KEY = 'rw_admin_pass_v3';

const STORAGE_KEY = 'rural_women_projects_registry_v3';
const EVENTS_KEY  = 'rural_women_events_registry_v3';

let remoteEntries = [];
let remoteOk = false;
let currentFilter = 'all';

/* ---------- أدوات ---------- */
async function sha256(text){
  const buf = await crypto.subtle.digest('SHA-256', new TextEncoder().encode(text));
  return Array.from(new Uint8Array(buf)).map(b=>b.toString(16).padStart(2,'0')).join('');
}
function escapeHtml(str){
  if(!str) return '';
  return String(str).replace(/[&<>"']/g, c=>({'&':'&amp;','<':'&lt;','>':'&gt;','"':'&quot;',"'":'&#39;'}[c]));
}
function isRemoteConfigured(){
  return !!APPS_SCRIPT_URL && APPS_SCRIPT_URL.trim() !== '';
}
function fileToBase64(file){
  return new Promise((resolve, reject)=>{
    const reader = new FileReader();
    reader.onload = ()=> resolve(reader.result.split(',')[1]);
    reader.onerror = reject;
    reader.readAsDataURL(file);
  });
}

/* ---------- الصلاحيات ---------- */
function adminPassStored(){ return sessionStorage.getItem(SESSION_KEY) || ''; }
function isAdmin(){ return !!adminPassStored(); }

function applyRoleUI(){
  const admin = isAdmin();
  document.getElementById('eventFormCard').style.display = admin ? '' : 'none';
  document.getElementById('eventsLocked').style.display = admin ? 'none' : '';
  document.getElementById('roleText').innerHTML = admin
    ? '<span class="admin-chip">✓ مديرة النظام: عائشة الراشدية</span> — صلاحيات الاعتماد والنشر مفعّلة'
    : 'أهلاً بك — يمكنك تسجيل طلبك أدناه، ويظهر في السجل العام بعد اعتماده';
  document.getElementById('galleryTitle').textContent = admin ? 'سجل الطلبات (كاملاً مع حالات الاعتماد)' : 'سجل الطلبات المعتمدة';
  const btn = document.getElementById('loginBtn');
  btn.textContent = admin ? 'تسجيل الخروج' : 'دخول مديرة النظام';
  btn.classList.toggle('ghost', admin);
  renderAll();
}

function openLogin(){
  document.getElementById('loginErr').textContent = '';
  document.getElementById('adminPass').value = '';
  document.getElementById('loginOverlay').classList.add('show');
  setTimeout(()=>document.getElementById('adminPass').focus(), 60);
}

document.getElementById('loginBtn').addEventListener('click', ()=>{
  if(isAdmin()){
    sessionStorage.removeItem(SESSION_KEY);
    applyRoleUI();
    fetchRemoteEntries();
  }else{
    openLogin();
  }
});
document.getElementById('loginClose').addEventListener('click', ()=>{
  document.getElementById('loginOverlay').classList.remove('show');
});

async function attemptLogin(){
  const pass = document.getElementById('adminPass').value;
  if(!pass) return;
  const errBox = document.getElementById('loginErr');
  errBox.textContent = 'جاري التحقق...';
  let ok = false;
  if(isRemoteConfigured()){
    try{
      const res = await postAction({action:'checkAuth', adminPass: pass});
      ok = !!res.success;
    }catch(e){
      // انقطاع الاتصال: تحقق محلي احتياطي
      ok = (await sha256(pass)) === LOCAL_ADMIN_HASH;
    }
  }else{
    ok = (await sha256(pass)) === LOCAL_ADMIN_HASH;
  }
  if(ok){
    sessionStorage.setItem(SESSION_KEY, pass);
    document.getElementById('loginOverlay').classList.remove('show');
    applyRoleUI();
    fetchRemoteEntries();
  }else{
    errBox.textContent = 'كلمة المرور غير صحيحة';
  }
}
document.getElementById('doLoginBtn').addEventListener('click', attemptLogin);
document.getElementById('adminPass').addEventListener('keydown', e=>{ if(e.key==='Enter') attemptLogin(); });

/* ---------- تخزين محلي (احتياطي) ---------- */
function loadLocal(key){
  try{ return JSON.parse(localStorage.getItem(key)) || []; }catch(e){ return []; }
}
function saveLocal(key, arr){ localStorage.setItem(key, JSON.stringify(arr)); }

/* ---------- حالة الاتصال ---------- */
function refreshStatusUI(){
  const dot = document.getElementById('driveDot');
  const text = document.getElementById('driveStatusText');
  const hint = document.getElementById('saveHint');
  if(!isRemoteConfigured()){
    dot.classList.remove('connected');
    text.textContent = 'غير مربوط بسجل مركزي — يتم الحفظ محلياً في هذا المتصفح فقط';
    hint.textContent = 'سيتم الحفظ محلياً في هذا المتصفح حتى يتم ربط السجل المركزي';
  }else if(remoteOk){
    dot.classList.add('connected');
    text.textContent = 'مربوط بالسجل المركزي — البيانات والصور تُحفظ في Google Drive و Sheets';
    hint.textContent = 'يُرسل الطلب إلى السجل المركزي ويظهر بعد اعتماده من مديرة النظام';
  }else{
    dot.classList.remove('connected');
    text.textContent = 'تعذّر الوصول للسجل المركزي حالياً — يتم الحفظ محلياً مؤقتاً';
    hint.textContent = 'تحقّقي من الاتصال أو حاولي الإرسال لاحقاً';
  }
}
document.getElementById('driveSetupBtn').addEventListener('click', ()=>{
  document.getElementById('setupOverlay').classList.add('show');
});
document.getElementById('setupClose').addEventListener('click', ()=>{
  document.getElementById('setupOverlay').classList.remove('show');
});

/* ---------- الاتصال بالسجل المركزي ---------- */
async function fetchRemoteEntries(){
  if(!isRemoteConfigured()) { refreshStatusUI(); renderAll(); return; }
  try{
    const url = APPS_SCRIPT_URL + (isAdmin() ? ('?key=' + encodeURIComponent(adminPassStored())) : '');
    const res = await fetch(url, {method:'GET'});
    const json = await res.json();
    if(json.success){
      remoteEntries = json.entries || [];
      remoteOk = true;
    }else{ remoteOk = false; }
  }catch(err){ remoteOk = false; }
  refreshStatusUI();
  renderAll();
}

async function postAction(payload){
  const res = await fetch(APPS_SCRIPT_URL, {
    method:'POST',
    headers:{'Content-Type':'text/plain;charset=utf-8'},
    body: JSON.stringify(payload)
  });
  return await res.json();
}

/* ---------- مصادر البيانات ---------- */
function usingRemote(){ return isRemoteConfigured() && remoteOk; }
function normStatus(e){ return e.status || 'approved'; } // سجلات قديمة بلا حالة = معتمدة
function getProjects(){
  const src = usingRemote() ? remoteEntries : loadLocal(STORAGE_KEY);
  let list = src.filter(e => (e.kind || 'project') !== 'event');
  if(!isAdmin()) list = list.filter(e => normStatus(e) === 'approved');
  return list;
}
function getEvents(){
  const src = usingRemote() ? remoteEntries : loadLocal(EVENTS_KEY);
  return src.filter(e => (e.kind || (src===remoteEntries?'project':'event')) === 'event');
}

/* ---------- رفع الصور (معاينة) ---------- */
function bindUpload(zoneId, inputId, thumbsId, store){
  const zone = document.getElementById(zoneId);
  const input = document.getElementById(inputId);
  const box = document.getElementById(thumbsId);

  function render(){
    box.innerHTML = store.list.map((f,i)=>`
      <div class="thumb">
        <img src="${f.dataUrl}" alt="">
        <button type="button" class="rm" data-i="${i}">✕</button>
      </div>`).join('');
    box.querySelectorAll('.rm').forEach(btn=>{
      btn.addEventListener('click', ()=>{
        store.list.splice(parseInt(btn.dataset.i),1);
        render();
      });
    });
  }
  store.render = render;

  function handle(fileList){
    Array.from(fileList).forEach(file=>{
      if(!file.type.startsWith('image/')) return;
      const reader = new FileReader();
      reader.onload = ()=>{ store.list.push({file, dataUrl:reader.result}); render(); };
      reader.readAsDataURL(file);
    });
  }
  input.addEventListener('change', e=> handle(e.target.files));
  zone.addEventListener('dragover', e=>{ e.preventDefault(); zone.classList.add('dragover'); });
  zone.addEventListener('dragleave', ()=> zone.classList.remove('dragover'));
  zone.addEventListener('drop', e=>{
    e.preventDefault(); zone.classList.remove('dragover'); handle(e.dataTransfer.files);
  });
}
const projStore = {list:[]};
const eventStore = {list:[]};
bindUpload('uploadZone','f_photos','thumbs', projStore);
bindUpload('eventUploadZone','e_photos','eventThumbs', eventStore);

/* ---------- إرسال طلب المستفيدة ---------- */
document.getElementById('regForm').addEventListener('submit', async function(e){
  e.preventDefault();
  const submitBtn = document.getElementById('submitBtn');
  submitBtn.disabled = true;
  submitBtn.textContent = 'جاري الإرسال...';

  const admin = isAdmin();
  const baseData = {
    kind: 'project',
    name: document.getElementById('f_name').value.trim(),
    civilId: document.getElementById('f_civil').value.trim(),
    phone: document.getElementById('f_phone').value.trim(),
    wilayat: document.getElementById('f_wilayat').value.trim(),
    type: document.getElementById('f_type').value,
    details: document.getElementById('f_details').value.trim(),
  };

  try{
    if(isRemoteConfigured()){
      const photos = await Promise.all(projStore.list.map(async f=>({
        name: f.file.name, mimeType: f.file.type, base64: await fileToBase64(f.file)
      })));
      const payload = {...baseData, photos};
      if(admin) payload.adminPass = adminPassStored(); // طلبات المديرة تُعتمد تلقائياً
      const result = await postAction(payload);
      if(!result.success) throw new Error(result.error || 'فشل الإرسال إلى السجل المركزي');
      showSuccess(
        admin ? 'تم الحفظ بنجاح 🌿' : 'تم استلام طلبك 🌿',
        admin ? 'تم حفظ الطلب واعتماده مباشرة في السجل المركزي.'
              : 'وصل طلبك إلى مسؤولة النظام، وسيظهر في السجل العام بعد اعتماده. شكراً لك.'
      );
      await fetchRemoteEntries();
    }else{
      const entries = loadLocal(STORAGE_KEY);
      entries.push({
        id: Date.now().toString(36)+Math.random().toString(36).slice(2,7),
        ...baseData,
        status: admin ? 'approved' : 'pending',
        createdAt: new Date().toISOString(),
        photos: projStore.list.map(f=>f.dataUrl)
      });
      saveLocal(STORAGE_KEY, entries);
      showSuccess('تم الحفظ محلياً', 'تم حفظ الطلب في هذا المتصفح (السجل المركزي غير متاح حالياً).');
      renderAll();
    }
    this.reset();
    projStore.list = [];
    projStore.render();
  }catch(err){
    alert('حدث خطأ أثناء الإرسال: ' + err.message);
  }finally{
    submitBtn.disabled = false;
    submitBtn.textContent = 'إرسال الطلب';
  }
});

/* ---------- نشر فعالية (مديرة النظام) ---------- */
document.getElementById('eventForm').addEventListener('submit', async function(e){
  e.preventDefault();
  if(!isAdmin()){ openLogin(); return; }
  if(eventStore.list.length === 0){ alert('أضيفي صورة واحدة على الأقل للفعالية'); return; }
  const btn = document.getElementById('eventSubmitBtn');
  btn.disabled = true;
  btn.textContent = 'جاري النشر...';

  const baseData = {
    kind: 'event',
    name: document.getElementById('e_title').value.trim(),
    wilayat: document.getElementById('e_date').value || '',
    type: 'فعالية / نشاط',
    details: document.getElementById('e_details').value.trim(),
  };

  try{
    if(isRemoteConfigured()){
      const photos = await Promise.all(eventStore.list.map(async f=>({
        name: f.file.name, mimeType: f.file.type, base64: await fileToBase64(f.file)
      })));
      const result = await postAction({...baseData, photos, adminPass: adminPassStored()});
      if(!result.success) throw new Error(result.error || 'فشل نشر الفعالية');
      showSuccess('تم النشر بنجاح 🌿', 'تم نشر الفعالية وصورها في المعرض العام.');
      await fetchRemoteEntries();
    }else{
      const events = loadLocal(EVENTS_KEY);
      events.push({
        id: Date.now().toString(36)+Math.random().toString(36).slice(2,7),
        ...baseData,
        status: 'approved',
        createdAt: new Date().toISOString(),
        photos: eventStore.list.map(f=>f.dataUrl)
      });
      saveLocal(EVENTS_KEY, events);
      showSuccess('تم الحفظ محلياً', 'تم حفظ الفعالية في هذا المتصفح (السجل المركزي غير متاح حالياً).');
      renderAll();
    }
    this.reset();
    eventStore.list = [];
    eventStore.render();
  }catch(err){
    alert('حدث خطأ أثناء النشر: ' + err.message);
  }finally{
    btn.disabled = false;
    btn.textContent = 'نشر الفعالية';
  }
});

function showSuccess(title, text){
  document.getElementById('successTitle').textContent = title;
  document.getElementById('successText').textContent = text;
  document.getElementById('successOverlay').classList.add('show');
}
document.getElementById('successClose').addEventListener('click', ()=>{
  document.getElementById('successOverlay').classList.remove('show');
});

/* ---------- اعتماد / رفض / حذف (مديرة النظام) ---------- */
async function updateStatus(id, status){
  if(!isAdmin()) return;
  if(usingRemote()){
    try{
      const res = await postAction({action:'updateStatus', id, status, adminPass: adminPassStored()});
      if(!res.success) throw new Error(res.error || 'تعذر تحديث الحالة');
      await fetchRemoteEntries();
    }catch(err){ alert('خطأ: ' + err.message); }
  }else{
    const entries = loadLocal(STORAGE_KEY).map(e => e.id===id ? {...e, status} : e);
    saveLocal(STORAGE_KEY, entries);
    renderAll();
  }
}
async function deleteEntry(id, key){
  if(!isAdmin()) return;
  if(!confirm('حذف هذا السجل نهائياً؟')) return;
  if(usingRemote()){
    try{
      const res = await postAction({action:'delete', id, adminPass: adminPassStored()});
      if(!res.success) throw new Error(res.error || 'تعذر الحذف');
      await fetchRemoteEntries();
    }catch(err){ alert('خطأ: ' + err.message); }
  }else{
    saveLocal(key, loadLocal(key).filter(e=>e.id!==id));
    renderAll();
  }
}

/* ---------- الإحصائيات ---------- */
function renderStats(){
  const src = usingRemote() ? remoteEntries : [...loadLocal(STORAGE_KEY), ...loadLocal(EVENTS_KEY)];
  const projects = src.filter(e => (e.kind||'project')!=='event');
  const approved = projects.filter(e => normStatus(e)==='approved');
  const pending  = projects.filter(e => normStatus(e)==='pending');
  const events   = src.filter(e => (e.kind||'')==='event');

  document.getElementById('statTotal').textContent = approved.length;
  document.getElementById('statWilayats').textContent = new Set(approved.map(e=>e.wilayat).filter(Boolean)).size;
  document.getElementById('statPhotos').textContent =
    approved.reduce((s,e)=>s+(e.photos?e.photos.length:0),0) +
    events.reduce((s,e)=>s+(e.photos?e.photos.length:0),0);
  document.getElementById('statEvents').textContent = events.length;

  const chip = document.getElementById('pendingChip');
  if(isAdmin() && pending.length > 0){
    chip.style.display = '';
    chip.textContent = '⏳ بانتظار الاعتماد: ' + pending.length;
  }else{
    chip.style.display = 'none';
  }
}

/* ---------- الفلاتر ---------- */
function renderFilters(){
  const projects = getProjects();
  const types = Array.from(new Set(projects.map(e=>e.type).filter(Boolean)));
  const row = document.getElementById('filterRow');
  row.innerHTML = `<button data-f="all" class="${currentFilter==='all'?'active':''}">الكل</button>` +
    types.map(t=>`<button data-f="${escapeHtml(t)}" class="${currentFilter===t?'active':''}">${escapeHtml(t)}</button>`).join('');
  row.querySelectorAll('button').forEach(btn=>{
    btn.addEventListener('click', ()=>{
      currentFilter = btn.dataset.f;
      renderFilters();
      renderGallery();
    });
  });
}

/* ---------- سجل الطلبات ---------- */
function renderGallery(){
  const admin = isAdmin();
  let entries = getProjects().slice().reverse()
    .filter(e => currentFilter==='all' || e.type===currentFilter);
  // للمديرة: الطلبات المعلقة أولاً
  if(admin){
    const order = {pending:0, approved:1, rejected:2};
    entries.sort((a,b)=>(order[normStatus(a)]??1)-(order[normStatus(b)]??1));
  }
  const list = document.getElementById('galleryList');

  if(entries.length===0){
    list.innerHTML = '<div class="empty-state">لا توجد طلبات ضمن هذا التصنيف بعد.</div>';
    return;
  }

  const statusLabel = {pending:'⏳ بانتظار الاعتماد', approved:'✓ معتمد', rejected:'✕ مرفوض'};

  list.innerHTML = entries.map(e=>{
    const st = normStatus(e);
    let photosHtml;
    if(!e.photos || e.photos.length===0){
      photosHtml = `<div class="proj-photos empty">لا توجد صور</div>`;
    }else{
      const shown = e.photos.slice(0,2);
      photosHtml = `<div class="proj-photos ${shown.length===1?'single':''}">
        ${shown.map(p=>`<img src="${p}" loading="lazy" alt="">`).join('')}
      </div>`;
    }
    const date = e.createdAt ? new Date(e.createdAt).toLocaleDateString('ar-OM',{dateStyle:'medium'}) : '';
    const statusChip = admin ? `<span class="status-chip ${st}">${statusLabel[st]||st}</span>` : '';
    const privateMeta = admin
      ? `<div class="meta">${e.civilId?`الرقم المدني: ${escapeHtml(e.civilId)}<br>`:''}${e.phone?`التواصل: ${escapeHtml(e.phone)}`:''}</div>`
      : '';
    const approveRow = (admin && st==='pending')
      ? `<div class="approve-row">
           <button class="ok" data-act="approve" data-id="${e.id}">اعتماد ✓</button>
           <button class="no" data-act="reject" data-id="${e.id}">رفض</button>
         </div>`
      : '';
    const delBtn = admin ? `<button class="del" data-act="del" data-id="${e.id}">حذف</button>` : '';
    return `<div class="proj-card ${st==='pending'?'is-pending':''}">
      ${photosHtml}
      <div class="proj-info">
        <div class="badges">
          <span class="badge">${escapeHtml(e.type||'—')}</span>
          ${statusChip}
        </div>
        <h4>${escapeHtml(e.name)}</h4>
        <div class="meta">📍 ${escapeHtml(e.wilayat||'')}</div>
        ${privateMeta}
        <p>${escapeHtml(e.details)}</p>
        ${approveRow}
        <div class="foot"><span>${date}</span>${delBtn}</div>
      </div>
    </div>`;
  }).join('');

  list.querySelectorAll('[data-act]').forEach(btn=>{
    btn.addEventListener('click', ()=>{
      const id = btn.dataset.id;
      if(btn.dataset.act==='approve') updateStatus(id, 'approved');
      else if(btn.dataset.act==='reject') updateStatus(id, 'rejected');
      else if(btn.dataset.act==='del') deleteEntry(id, STORAGE_KEY);
    });
  });
}

/* ---------- معرض الفعاليات ---------- */
function renderEvents(){
  const admin = isAdmin();
  const events = getEvents().slice().reverse();
  const list = document.getElementById('eventsList');

  if(events.length===0){
    list.innerHTML = '<div class="empty-state">لا توجد فعاليات منشورة بعد — ترقّبوا أنشطة المرأة الريفية القادمة.</div>';
    return;
  }

  list.innerHTML = events.map(e=>{
    const img = (e.photos && e.photos[0]) ? `<img class="bg" src="${e.photos[0]}" loading="lazy" alt="">` : '';
    const date = e.wilayat ? escapeHtml(e.wilayat) : (e.createdAt ? new Date(e.createdAt).toLocaleDateString('ar-OM',{dateStyle:'medium'}) : '');
    const count = e.photos ? e.photos.length : 0;
    const delBtn = admin ? `<button class="del" data-id="${e.id}">حذف</button>` : '';
    return `<div class="event-card">
      ${img}
      <div class="veil"></div>
      <div class="content">
        <span class="tag">فعالية · ${count} ${count===1?'صورة':'صور'}</span>
        <h4>${escapeHtml(e.name)}</h4>
        <p>${escapeHtml(e.details||'')}</p>
        <div class="ev-foot"><span>🗓 ${date}</span>${delBtn}</div>
      </div>
    </div>`;
  }).join('');

  list.querySelectorAll('.del').forEach(btn=>{
    btn.addEventListener('click', ()=> deleteEntry(btn.dataset.id, EVENTS_KEY));
  });
}

function renderAll(){
  renderStats();
  renderFilters();
  renderGallery();
  renderEvents();
}

/* ---------- التهيئة ---------- */
applyRoleUI();
refreshStatusUI();
renderAll();
fetchRemoteEntries();
</script>
</body>
</html>
